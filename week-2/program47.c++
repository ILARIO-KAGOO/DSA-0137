#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int i = 0,count = 0;
  vector<int> arr = {1,3,3,3,4,4,4,5,6};
  sort(arr.begin(),arr.end());
  arr.erase(unique(arr.begin(),arr.end()),arr.end());
  for (auto it = arr.begin(); it != arr.end(); ++it)
    cout << ' ' << *it;
}