#include<iostream>
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
//search a given element recursive
Node* searchr(Node* root, int key){
    if(root == nullptr || root->data == key)
        return root;
    if(key < root->data)
        return search(root->left, key);
    else 
        return search(root->right, key);
}
//search a given element iterative
Node* searchi(Node* root, int key){
    while(root != nullptr){
        if(root->data == key)
            return root;
        if(key < root->data)
            root = root->left;
        else
            root = root->right;
    }
    return nullptr;
}
//max element i.e. rightmost element
Node* Max(Node* root){
    if(root == nullptr)
        return root;
    while(root->right != nullptr)
        root = root->right;
    return root;
}
//min element i.e. leftmost element
Node* Min(Node* root){
    if(root == nullptr)
        return root;
    while(root->left != nullptr)
        root = root->left;
    return root;
}
//inorder successor
Node* inorderSuccessor(Node* root, Node* n){
    if (n->right != nullptr)
    return Min(n->right);
    Node* successor = nullptr;
    while (root != nullptr) {
        if (n->data < root->data) {
            successor = root;
            root = root->left;
        }
        else if (n->data > root->data)
            root = root->right;
        else
            break;
    }
}
//inorder predecessor
Node* inorderPredecessor(Node* root, Node* n){
    if (n->left != nullptr)
    return Max(n->left);
    Node* predecessor = nullptr;
    while (root != nullptr) {
        if (n->data > root->data) {
            predecessor = root;
            root = root->right;
        }
        else if (n->data < root->data)
            root = root->left;
        else
            break;
    }
}
int main(){
    Node* root = new Node(8);
    root->left = new Node(4);
    root->right = new Node(10);
    root->left->left = new Node(3);
    root->left->right = new Node(6);
    int key = 6;
    Node* searchResultR = searchr(root, key);
    if (searchResultR != nullptr)
        cout << "Recursive: Element " << key << " found " << endl;
    else
        cout << "Recursive: Element " << key << " not found " << endl;
    Node* searchResultI = searchi(root, key);
    if (searchResultI != nullptr)
        cout << "Iterative: Element " << key << " found " << endl;
    else
        cout << "Iterative: Element " << key << " not found " << endl;
    Node* maxNode = Max(root);
    if (maxNode != nullptr)
        cout << "Maximum element : " << maxNode->data << endl;

    Node* minNode = Min(root);
    if (minNode != nullptr)
        cout << "Minimum element : " << minNode->data << endl;
    Node* targetNode = root->left; // Node with value 4
    Node* successor = inorderSuccessor(root, targetNode);
    if (successor != nullptr)
        cout << "Inorder Successor of " << targetNode->data << " " << successor->data << endl;
    else
        cout << "Inorder Successor of " << targetNode->data << " not exist." << endl;
    Node* predecessor = inorderPredecessor(root, targetNode);
    if (predecessor != nullptr)
        cout << "Inorder Predecessor of " << targetNode->data << " " << predecessor->data << endl;
    else
        cout << "Inorder Predecessor of " << targetNode->data << " not exist." << endl;
    return 0;
}
