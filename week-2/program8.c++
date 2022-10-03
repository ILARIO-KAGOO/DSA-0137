#include<iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter Celsius: ";
  cin >> n;
  int c = ((n*9)/5)+32;

  cout << "Fahrenheit: " << c;
}