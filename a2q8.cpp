#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 2, 3, 6, 7, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int Count = 0;

    for (int i = 0; i < n; i++) {
        bool isDuplicate = false;

 
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = true;
                break;
         }
}

        if (!isDuplicate) {
            Count++;
        }
    }

    cout << "Total distinct elements: " << Count << endl;
    return 0;
}