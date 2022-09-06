#include<iostream>
using namespace std;
int main()
{
  int a,b,c,d;
  cout<<"Enter 1st number:";
  cin>>a;
  cout<<"Enter 2nd number:";
  cin>>b;
  cout<<"Enter 3rd number:";
  cin>>c;
  cout<<"Enter 4th number:";
  cin>>d;

  if (a>b && a>c && a>d)
  {
    cout<<a<<" is the largest";
  }
  else if (b>a && b>c && a>d)
  {
    cout<<b<<" is the largest";
  }
  else if (c>a && c>b && c>d)
  {
    cout<<c<<" is the largest";
  }
  else
  {
    cout<<b<<" is the largest";
  }
}