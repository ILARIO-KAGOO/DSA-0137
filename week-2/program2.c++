#include<iostream>
using namespace std;
int main()
{
  int n,temp;
  cout << "Enter the size: ";
  cin >> n;
  int arr[n];
  for (int i = 0 ; i<n ; i++)
  {
    cout << "Enter element: ";
    cin >> arr[i];
  }


  cout << "array of elements: ";
  for(int i = 0 ; i<n ; i++)
  {
    cout<<arr[i];
  }

  temp = arr[0];
  arr[0] = arr[n-1];
  arr[n-1] = temp;
  
  cout << "array of elements(after switching): ";
  for(int i = 0 ; i<n ; i++)
  {
    cout<<arr[i];
  }
}