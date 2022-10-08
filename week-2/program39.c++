#include<iostream>
using namespace std;
int main()
{
  int num , n ;
  cout << "Enter the number: " ;
  cin >> num ;
  cout << "Enter the bit number: " ;
  cin >> n ;
  cout << "Answer:\n" << (1 &(num >> (n-1)));
}