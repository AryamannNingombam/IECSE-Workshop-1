#include <iostream>
#include <map>
#include <unordered_map>
#include <string>


using namespace std;


int main(){
    map<int,string>m1;
    unordered_map<int,string> m2;

    //using ordered map;
    m1[4] = "Aryamann4";
    m1[2] = "Situ2";
    m1[6] = "Situ6";
    m1[9] = "Aryamann9";
    m1[1] = "Aryamann1";
    m1[89] = "Situ89";

    //printing the values in ordered map;
    cout << "\nORDERED\n";
    map<int,string>::iterator it;
    for (it = m1.begin();it!=m1.end();it++){
        cout << it->first << ' ' << it->second << '\n';
    }
    
    //using unordered map;
    m2[4] = "Aryamann4";
    m2[2] = "Situ2";
    m2[6] = "Situ6";
    m2[9] = "Aryamann9";
    m2[1] = "Aryamann1";
    m2[89] = "Situ89";

    cout << "\nUNORDERED\n";

     //printing the values in unordered map;
    unordered_map<int,string>::iterator it2;
    for (it2 = m2.begin();it2!=m2.end();it2++){
        cout << it2->first << ' ' << it2->second << '\n';
    }

    return 0;
}