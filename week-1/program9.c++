#include<iostream>
using namespace std;

int main()
{
  int a=20,b=10,c,d;
  cout<<"Enter your case:";
  cin>>c;
  switch (c)
  {
  case 1:
    d = a+b;
    cout<<d;
    break;
  
  case 2:
    d =a-b;
    cout<<d;
    break;

  default:
    cout<<"Invalid Choice";
    break;
  }
}