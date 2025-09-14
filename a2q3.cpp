//linear time
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]) + 1;

    int missing = n;
    for (int i = 0; i < n - 1; ++i) {
        if (arr[i] != i + 1) {
            missing = i + 1;
            break;
        }
    }

    cout << "Missing number (linear time): " << missing << endl;

    return 0;
}
//uing binery search
#include <iostream>
using anmespace std;

int main() {
    int arr[] = {1, 2, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]) + 1;

    int low = 0;
    int high = n - 2;
    int missing = n;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == mid + 1) {
 
            low = mid + 1;
        } else {
            missing = mid + 1;
            high = mid - 1;
        }
    }

    cout << "Missing number (binary search): " << missing << endl;

    return 0;
}
