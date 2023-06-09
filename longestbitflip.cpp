
#include <iostream>
using namespace std;

int longestsubsequence(int arr[], int n) {
    int maxLength = 0; // Variable to store the length of the longest subsequence
    int length = 0; // Variable to store the length of the current subsequence

    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            length++; // Increment the length if the element is 1
        } else {
            if (length > maxLength) {
                maxLength = length; // Update the maxLength if the current length is greater
            }
            length = 0; // Reset the length if the element is not 1
        }
    }

    if (length > maxLength) {
        maxLength = length; // Check if the last subsequence is the longest
    }
        int i;
       if (arr[i] == 0) {
            arr[i] = 1;
        } else {
            arr[i] = 0;
        }
    

    return maxLength;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array to find the longest subsequence: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Printing the array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int longestLength = longestsubsequence(arr, n);
    cout << "Length of the longest subsequence: " << longestLength << endl;

    return 0;
}
