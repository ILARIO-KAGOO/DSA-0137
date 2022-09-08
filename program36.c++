#include<iostream>
using namespace std;

int main()
{
  int arr[10],c,max,min;
  cout<<"enter the no of inputs: ";
  cin>>c;
  for (int i = 0; i < c; i++)
  {
    cout<<"Enter "<<i+1<<" element: ";
    cin>>arr[i];
  }
  for (int j = 0; j < c; j++)
  {
      if(max<arr[j])
      {
        max=arr[j];
      }
  }
  for (int j = 0; j < c; j++)
  {
      if(min>arr[j])
      {
        min=arr[j];
      }
  }
  cout<<max<<endl;
  cout<<min<<endl;
}