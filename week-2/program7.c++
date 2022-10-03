#include<iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter Fahrenheit: ";
  cin >> n;
  int c = ((n-32)*5)/9;

  cout << "Celsius: " << c;
}