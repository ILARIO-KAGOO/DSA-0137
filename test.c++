#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[100];
    cin>>str;
    // string rev = string(str.rbegin(), str.rend());
    strrev(str);
    cout << str << endl;
    return 0;
}