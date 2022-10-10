#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s,u,l;
  cout << "Enter the string: " ;
  cin >> s;
  transform(s.begin(),s.end(),s.begin(),::toupper);
  cout << "Uppercase: " << s <<endl;
  transform(s.begin(),s.end(),s.begin(),::tolower);
  cout << "Lowercase: " << s << endl;
}