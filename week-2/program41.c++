#include<iostream>
#include<cmath>
using namespace std;

int main()
{
  int n , i ;
  cout << "Enter number: " ;
  cin >> n ;
  cout << "Enter the exponent: " ;
  cin >> i ;
  cout << "pow(" << n << " , " << i << ") : " << pow(n,i) ;
}