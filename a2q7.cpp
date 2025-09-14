#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,9,7,4,5,3,6,7,9,6,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    int count = 0;
    for(int i =0; i<size ;i++)
    {
        for(int j=i+1; j<size ; j++)
        {
        if( arr[i]> arr[j])
        {
            count++;
        }
        }
}
cout << "Number of inversions: " << count << endl;

}
