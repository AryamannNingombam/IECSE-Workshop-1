// https://www.geeksforgeeks.org/iterators-c-stl/
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, count = 0; // 
    cin >> n;       
    int arr[n]; // 
    // Input array
    for(int i = 0; i< n;i++) cin >> arr[i]; 

    // Initialise vector
    vector<int> v; // 

    for(int i = 0; i < n; i++){

        if(v.size() == 0){
            count++;
            v.push_back(arr[i]);
        }

        else{
            int idx = upper_bound(v.begin(), v.end(), arr[i]) - v.begin();

            // If idx is equal to vector size, new tower needs to be created
            if(idx == v.size()){
                count++;
                v.push_back(arr[i]);
            }
            
            // Replace vector element with array element
            else
                v[idx] = arr[i];
        
        }
    }
    cout << count << endl;
}

