#include <iostream>
#include <climits>
using namespace std;
int findSecondLargest(int arr[], int n) {
    if (n < 2) {
        cout << "Array should have at least two elements" << std::endl;
        return -1; // Indicates error
    }

    int first = INT_MIN, second = INT_MIN;

    // Traverse the array
    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == INT_MIN) {
        std::cout << "No second largest element found" << std::endl;
        return -1;
    }

    return second;
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int secondLargest = findSecondLargest(arr, n);

    if (secondLargest != -1) {
        std::cout << "Second largest element: " << secondLargest << std::endl;
    }

    return 0;
}
