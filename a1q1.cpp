#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter elements of array: "<<endl;
        cin>>arr[i]; //create 
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]; //dispaly 
    }

    int j;
     cout<<"enter j: "<<endl;
    cin>>j;
        if(i==j){
            for(int i=0;i<n;i++)
            arr[i+1]=arr[i];
            cout<<"enter new value in array: " //insert 
            cin>>arr[j];
        }
        return 0;
}
