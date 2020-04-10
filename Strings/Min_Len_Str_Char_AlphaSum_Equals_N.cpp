/*
Problem:
https://www.geeksforgeeks.org/minimum-length-string-with-sum-of-the-alphabetical-values-of-the-characters-equal-to-n/?ref=leftbar-rightbar
*/

#include <bits/stdc++.h>
using namespace std;

int minLen(int n)
{
    int len = n/26;
    if (n % 26 != 0)
        return ++len;
    return len;
}

string minStr (int n)
{
    int len = n/26;
    string str = "";
    
    while (len--)
        str += "z";
    
    if (n % 26 != 0)
        str += (char)((n % 26) + 96);

    return str;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(32767, '\n');
    int l = minLen(n);
    string str = minStr(n);
    cout << "Minimum Length of String with Char Alpha Sum = N is: " << l << endl;
    cout << "Minimum Length String with Char Alpha Sum = N is: " << str << endl;
    return 0;
}
