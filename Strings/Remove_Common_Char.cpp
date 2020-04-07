/*
Problem:
https://www.geeksforgeeks.org/remove-characters-from-the-first-string-which-are-present-in-the-second-string/
https://www.techiedelight.com/remove-certain-characters-string-cpp/
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s1, s2;
    getline(cin,s1);
    getline(cin,s2);


	s1.erase(remove_if(s1.begin(), s1.end(),
						[s2](const char c) {
							return s2.find(c) != std::string::npos;
						}),
						s1.end());

	cout << s1 << endl;
	return 0;
}
