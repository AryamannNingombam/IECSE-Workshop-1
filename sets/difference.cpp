#include <iostream>
#include <set>
#include <unordered_set>

using namespace std;


int main()
{
    //ordered set;
    set<int> s1;
    s1.insert(5);
    s1.insert(3);
    s1.insert(7);
    s1.insert(2);
    s1.insert(9);
    s1.insert(1);

    //printing the values;
    cout << "\nORDERED\n";
    for (auto i : s1)
        cout << i << ' ';
    cout << '\n';

    //unordered set;
    unordered_set<int> s2;
    s2.insert(5);
    s2.insert(3);
    s2.insert(7);
    s2.insert(2);
    s2.insert(9);
    s2.insert(1);
    s2.insert(45);
    s2.insert(455);

    //printing the values;
    cout << "\nUNORDERED\n";
    for (auto i : s2)
        cout << i << ' ';
    cout << '\n';

    return 0;
}