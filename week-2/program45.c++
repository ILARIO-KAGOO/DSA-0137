#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int arr[8] = {1,10,3,5,4,6,7,2};
  sort(arr,arr+8);
  for(int i = 0 ; i < 8 ; i++)
  {
    if (arr[i]+1!=arr[i+1])
    {
      cout << "lowest missing number is " << arr[i]+1;
      break;
    }
  }
}