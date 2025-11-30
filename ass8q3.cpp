#include<iostreaam>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node (int val){
        data = val;
        right = left = nullptr;
    }
};
//insert an element
Node* insert(Node* root, int key){
    if(root == nullptr)
        return new Node(key);
    if(key < root->data)
        root->left = insert(root->left, key);
    else if(key > root->data)
        root->right = insert(root->right, key);
    return root;
}
//delete an element
Node* delete(Node* root, int key){
    if(root == nullptr)
        return root;
    if(key < root->data)
        root->left = delete(root->left, key);
    else if(key > root->data)
        root->right = delete(root->right, key);
    else{
        if(root->left == nullptr){
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if(root->right == nullptr){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        Node* temp = Min(root->right);
        root->data = temp->data;
        root->right = delete(root->right, temp->data);
    }
    return root;
}
//max depth
int maxDepth(Node* root){
    if(root == nullptr)
        return 0;
    int leftDepth = maxDepth(root->left);
    int rightDepth = maxDepth(root->right);
    return max(leftDepth, rightDepth) + 1;
}
//min depth
int minDepth(Node* root){
    if(root == nullptr)
        return 0;
    int leftDepth = minDepth(root->left);
    int rightDepth = minDepth(root->right);
    return min(leftDepth, rightDepth) + 1;
}
int main(){
    Node* root = nullptr;
    root = insert(root, 8);
    root = insert(root, 4);
    root = insert(root, 10);
    root = insert(root, 3);
    root = insert(root, 6);

    cout<<"Max Depth: "<<maxDepth(root)<<endl;
    cout<<"Min Depth: "<<minDepth(root)<<endl;

    root = delete(root, 4);
    cout<<"output : "<<inorder(root)<<endl;
    return 0;
}