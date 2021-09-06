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
    unordered_map<char,int>count;

    //if there are no elements, then the answer would
    //be zero;
    if (s.size() == 0)
        return 0;

    //incrementing for the first element;
    count[s[0]]++;

    //the minimum answer would be one
    //(if there is only one character in the whole string)
    int answer{1};

    //i would be the first pointer, j would be the second pointer;
    int i{0}, j{0};

    //while we don't reach the end of the string;
    while (j != s.size() - 1)
    {
        //if the number of times the next character has
        //occured between the first pointer and the 
        //second pointer is zero;
        if (count[s[j + 1]] == 0)
        {
            //incrementing this (this character has been found)
            count[s[j + 1]]++;
            //incrementing the second pointer, to move forward;
            j++;

            //this would be the final answer, the max would be kept
            //as we are asked to display the length of the longest 
            //substring;
            answer = max(answer, j - i + 1);
        }
        else
        {
            //this would happen if the next character after the
            //second pointer has been encountered before in the window,
            //we would move the first pointer forward until the 
            //particular character is not removed from the window;
            count[s[i]]--;
            i++;
        };
    };

    //returning the final answer;
    return answer;
}

int main()
{

    string s;
    cin >> s;

    //the answer printed;
    cout << lengthOfLongestSubstring(s) << '\n';

    return 0;
}