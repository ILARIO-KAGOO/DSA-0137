#include<iostream>
using namespace std;

int main()
{
  int a=20,b=30,c=10;
  if(a>b && a>c)
  {
    cout<<"a is greater";
  }
  else if (b>c && b>a)
  {
    cout<<"b is greater";
  }
  else 
  {
    cout<<"c is greater";
  }

}