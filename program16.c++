#include<iostream>
using namespace std;

void add(int a,int b)
{
  int c = a+b;
  cout<<c<<endl;
}
void add(double a,double b)
{
  double c = a+b;
  cout<<c<<endl;
}

int main()
{
  add(1,2);
  add(0.5,0.5);
}
