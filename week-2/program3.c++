#include<iostream>
using namespace std;

int main()
{
  int n,j=0,k;
  cout << "Enter the size: ";
  cin >> n;
  int arr[n],arr1[n];
  for (int i = 0 ; i < n ; i++)
  {
    cout << "Enter the Element: ";
    cin >> arr[i];
  }
  cout << "Enter element to be deleted: ";
  cin>>k;
  int g = 0;
  while(j<n)
  {
    if(arr[j] == k)
    {
      j++;
      continue;
    }
    else
    {
      arr1[g] = arr[j];
      j++;
      g++; 
    }
  }
  for (int i = 0 ; i <g ; i++)
  {
    cout << arr1[i];
  }
  
}