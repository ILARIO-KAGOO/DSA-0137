#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  string s;
  cout << "Enter string: ";
  cin >> s;
  sort(s.begin(),s.end());
  cout << "Sorted string: " << s;
}