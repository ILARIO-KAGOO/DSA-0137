#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int n;
  cout << "Enter size: ";
  cin >> n;
  int arr[n];
  for(int i = 0;i<n;i++)
  {
    cin >> arr[i];
  }
  sort(arr,arr+n);
  cout << "Max: "<< arr[n-1]<<endl;
  cout << "Min: "<< arr[0]<<endl;
  cout << "Sum: "<< arr[0]+arr[n-1]<<endl;
  cout << "Sum: "<< arr[n-1]-arr[0]<<endl;

}