#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,mx,mx_no=0;
  cout << "Enter the size: ";
  cin >> n;
  int arr[n];

  for (int i=0 ; i<n ; i++)
  {
    cin >> arr[i];
  }
  for (int i=0 ; i<n ; i++)
  {
    int s = count(arr,arr+n,arr[i]);
    if( mx_no < s)
    {
      mx = arr[i];
      mx_no = s;
    }
  }
  cout <<"Element: "<< mx<<endl;
  cout << "no of repetition: "<< mx_no<<endl;
}