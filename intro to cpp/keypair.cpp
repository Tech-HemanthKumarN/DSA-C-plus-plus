#include <iostream>
using namespace std;

bool twopointerApproach(int arr[], int n, int x) {
    int l = 0;
    int h = n - 1;

    while (l < h) {
        int currentsum = arr[l] + arr[h];
        if (currentsum == x)
            return true;
        else if (currentsum > x)
            h--;
        else
            l++;
    }
    return false;
}

int main() {
    int arr[] = {1, 4, 6, 8, 10, 45};
    int size = sizeof(arr) / sizeof(arr[0]); // u can also give 6
    int x = 16;

    bool ans = twopointerApproach(arr, size, x); 
    if (ans) {
        cout << "Target found: A pair with sum " << x << " exists." << endl;
    } else {
        cout << "No pair found with sum " << x << "." << endl;
    }

    return 0;
}
