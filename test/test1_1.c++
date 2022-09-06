#include<iostream>
using namespace std;
int main()
{
  int a,b,c,d;
  cout<<"Enter case:";
  cin>>c;
  cout<<"Enter 1st number:";
  cin>>a;
  cout<<"Enter 2nd number:";
  cin>>b;
  switch(c)
  {
    case 1:
      d = a+b;
      cout<<"a+b="<<d;
      break;
    case 2:
      d = a-b;
      cout<<"a-b="<<d;
      break;
    case 3:
      d = a*b;
      cout<<"a*b="<<d;
      break;
    case 4:
      d = a/b;
      cout<<"a/b="<<d;
      break;
    case 5:
      d = a%b;
      cout<<"a%b="<<d;
      break;
    default:
      cout<<"Invalid case.";
      break;
  }
}