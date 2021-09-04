#include <iostream>
#include <map>
#include <unordered_map>
#include <string>
#include <algorithm>

using namespace std;

//function which would return the longest substring without repeating 
//characters;
int lengthOfLongestSubstring(string s)
{
    //using ordered map;
    unordered_map<int,int>count;

    //if there are no elements, then the answer would
    //be zero;
    if (s.size() == 0)
        return 0;

    //if we had not kept the previous check, this would throw an error
    //(segmentation fault;)
    count[s[0]]++;
    int answer{1};
    int i{}, j{};
    while (j != s.size() - 1)
    {
        if (count[s[j + 1]] == 0)
        {
            count[s[j + 1]]++;
            j++;
            answer = max(answer, j - i + 1);
        }
        else
        {
            count[s[i]]--;
            i++;
        };
    };
    return answer;
}

int main()
{
    string s;
    cin >> s;
    cout << lengthOfLongestSubstring(s) << '\n';

    return 0;
}