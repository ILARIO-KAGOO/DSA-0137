#include<iostream>
using namespace std;
int main()
{
  int q,sum,avg;
  cout << "Enter the size of array: ";
  cin >> q;
  int arr[q];
  for (int i=0 ; i<q ; i++)
  {
    int f;
    cout << "Enter Element: ";
    cin >> f;
    arr[i] = f;
    sum+=f;
  } 

  avg = sum/q;
  cout<<"Average of the array: "<< avg;

}