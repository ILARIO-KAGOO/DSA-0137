#include<iostream>
using namespace std;
int main()
{
  int arr[] = {1,2,3,3,3,6,6,6,6,6},k,mcount=0;
  int n = sizeof(arr)/sizeof(arr[0]);
  for(int i = 0 ; i < n ; i++)
  {
    int count = 0;
    for(int j = 0 ; j < n ; j++)
    {
      if(arr[i] == arr[j] && i != j)
      {
        count++;
      }
    }
    if (count > mcount)
    {
      mcount = count ; 
      k = arr[i];
    }
  }
  cout << k << " , " << mcount+1;
}