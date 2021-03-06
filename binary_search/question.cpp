// https://www.geeksforgeeks.org/iterators-c-stl/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; // 5
    cin >> n;
    int arr[n]; // 3 8 2 1 5 
    // Input array
    for (int i = 0; i < n; i++) cin >> arr[i];

    // Initialise vector
    vector <int> v; // 1 5
    v.push_back(arr[0]);       
     
    for (int i = 1; i < n; i++) {
        int idx = upper_bound(v.begin(), v.end(), arr[i]) - v.begin();

        // If idx is equal to vector size, new tower needs to be created
        if (idx == v.size())
            v.push_back(arr[i]);

        // Replace vector element with array element
        else
            v[idx] = arr[i];

    }
    cout << v.size() << endl;
}