//queues
#include <iostream>
using namespace std;

class queue{
    int *arr;
    int front, rear ,size;
    public:
    queue(int n){
        arr = new int[n];
        size = n;
        front = rear = -1;
    }
    bool isEmpty(){
        return front == -1;
    }
    bool isFull(){
        return rear == size-1;
    }
    void enqueue(int val){
        if (isFull()){
            cout<<"Queue Overflow"<<endl;
            return;
        }
        else if (isEmpty()){
            front = rear = 0;
            arr[0]=val;
        }
        else{
            rear++;
            arr[rear]=val;
        }
    }
    void dequeue(){
        if (isEmpty()){
            cout<<"Queue underflow"<<endl;
            return;
        }
        else if(front == rear){
            front = rear = -1;
        }
        else{
            front++;
        }
    }
     int peek(){
            if (isEmpty()){
                cout<<"the queue is empty"<<endl;
            }
            else 
            return arr[front];
        }

        void display(){
            if (isEmpty()){
                cout<<"queue is empty"<<endl;
                return;
            }
            for (int i=front; i<=rear; i++){
                cout<<arr[i]<<" ";
            }
        }
}
int main(){
    queue q(5);
    q.enqueue(2);
    q.enqueue(8);
    q.enqueue(7);
    q.dequeue();
    cout<<"the front element :"<<q.peek()<<endl;;
    q.display();
    return 0;
    }