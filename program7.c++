#include<iostream>
using namespace std;
int main()
{
  int a=10,b=20,c=30,d=20;
  if (a>b && a>c && a>d)
  {
    cout<<"A is greater";
  }
  else if (b>a && b>c && b>d)
  {
    cout<<"B is greater";
  }
  else if (c>a && c>b && c>d)
  {
    cout<<"C is greater";
  }
  else
  {
    cout<<"D is greater";
  }
