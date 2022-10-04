#include<iostream>
using namespace std;

inline int cube(int a)
{
  return a*a*a;
}

int main()
{
  int a;
  cout << "Enter the value:";
  cin >> a;
  cout << "cube of "<<a<<" is "<<cube(a)<<endl; 
}