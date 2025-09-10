#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter " << n << " elements: ";
    int arr[1000];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxSum = -1000000000;

    for (int i = 0; i < n; i++) {
        int sum = 0;
        int count = 1;
        int idx = i;
        while (idx + count - 1 < n) {
            for (int j = 0; j < count; j++) {
                sum += arr[idx];
                idx++;
            }
            count++;
        }
        if (sum > maxSum) {
            maxSum = sum;
        }
    }

    cout << "Maximum special sum is: " << maxSum << endl;
    return 0;
}