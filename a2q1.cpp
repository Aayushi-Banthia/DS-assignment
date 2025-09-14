//linear search
#include <iostream>
using namespace std;

int main(){
    int num =4;
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        if(arr[i]==4){
            cout<<"position of the number is :"<< i+1;
        }
        cout<< endl;
    }
    return 0;
}

//binary search
#include <iostream>
using namespace std;

int main(){
    int num =4;
    int arr[5]={1,2,3,4,5};
    int low=0;
    int high=4;
    int index=-1;
 
    while(low<=high){
        int mid=low + (high-low)/2;
        if(arr[mid]==num){
        index=mid;
        break;
        }
        else if (arr[mid]<num){
            low=mid+1;
        }
        else{
            high+mid-1;
        }
    }
    if(index!=-1){
        cout<<"target found at "<<index+1<<endl;
        }
    else{
           cout<<"target not found" <<endl;
        }
    return 0;
}
