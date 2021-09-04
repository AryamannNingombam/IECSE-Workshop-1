#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long

//situ explain;

using namespace std;

void solve()
{
    int n, i, j, cnt = 0;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
        cin >> arr[i];
    vector<int> v;
    for (i = 0; i < n; i++)
    {
        if (v.size() == 0)
        {
            v.push_back(arr[i]);
            cnt++;
        }
        else
        {
            int pos = lower_bound(v.begin(), v.end(), arr[i]) - v.begin();
            if (pos == v.size())
            {
                cnt++;
                v.push_back(arr[i]);
                continue;
            }
            else if (v[pos] > arr[i])
            {
                v[pos] = arr[i];
            }
            else
            {
                int pos2 = upper_bound(v.begin() + pos, v.end(), arr[i]) - v.begin();
                if (pos2 == v.size())
                {
                    v.push_back(arr[i]);
                    cnt++;
                }
                else
                {
                    v[pos2] = arr[i];
                }
            }
        }
    }
    cout << cnt << endl;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}