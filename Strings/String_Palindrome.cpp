/*
Problem:
https://practice.geeksforgeeks.org/problems/palindrome-string/0
*/

#include <bits/stdc++.h>
using namespace std;

void checkPalin(string str, int l)
{
    string s = "";
    s.assign(str);

    for (int i = 0; i < l/2; i++)
        swap(s[i],s[l-i-1]);

    if ( !str.compare(s) )
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    
}

int main()
{
    int t,l;
    string str;
    cin >> t;
    cin.ignore(32767, '\n');

    while (t > 0)
    {
        cin >> l;
        cin.ignore(32767, '\n');
        getline(cin,str);
        checkPalin(str,l);
        t--;
    }
    return 0;
}
