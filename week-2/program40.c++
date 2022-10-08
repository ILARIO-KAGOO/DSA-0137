#include<iostream>
using namespace std ;
int main()
{
  int n = 6 ;
  int arr[n] = {1,2,3,3,3,3,} , count[2] = {0 , 0} ;

  for(int i = 0 ; i < n ; i++ )
  {
    int cnt = 0;
    for(int j = 0 ; j < n ; j++ )
    {
      if (arr[i]==arr[j] && i!=j)
      {
        cnt++ ;
      }
    }
    if(cnt > count[1]-1)
    {
      count[0] = arr[i] ;
      count[1] = cnt+1 ;

    }
  }
  cout << "Element: " << count[0] << "\n" << "Repettition: " << count[1] ;
}