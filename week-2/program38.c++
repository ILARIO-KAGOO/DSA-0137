#include<iostream>
using namespace std;
int main()
{
  int n , n1=0 , n2=1 , count=0 ;
  cout << "Enter number: " ;
  cin >> n ;
  if(n <= 0)
  {
    cout << "Enter positive number" << endl ;
  }
  else if (n == 1)
  {
    cout << "fibonacci series upto " << n << " : " << n1 << endl ;
  }
  else
  {
    cout << "Fibonacci series upto " << n << " : \n";
    while (count < n)
    {
      cout << n1 << " " ;
      int nth = n1 + n2 ;
      n1 = n2 ;
      n2 = nth ;
      count++;
    }
  }
}