// CPP program to illustrate
// std :: lower_bound
#include <bits/stdc++.h>
using namespace std;

int bs_upper_bound(int a[], int n, int x) {
    int l = 0;
    int h = n; // Not n - 1
    while (l < h) {
        int mid =  l + (h - l) / 2;
        if (x >= a[mid]) {
            l = mid + 1;
        } else {
            h = mid;
        }
    }
    return l;
}


int bs_lower_bound(int a[], int n, int x) {
    int l = 0;
    int h = n; // Not n - 1
    while (l < h) {
        int mid =  l + (h - l) / 2;
        if (x <= a[mid]) {
            h = mid;
        } else {
            l = mid + 1;
        }
    }
    return l;
}

int main(){
    int arr[] = {0,1,2,3,3,5,10};
    cout << bs_upper_bound(arr, 7,3) << endl;

    cout << bs_lower_bound(arr, 7,3) << endl;
}



// Time Complexity: O(log n)

// upper_bound()
// lower_bound()