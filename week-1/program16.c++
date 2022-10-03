#include<iostream>
using namespace std;

void add(int a,int b)
{
  int c = a+b;
  cout<<c<<endl;
}
void add(float a,float b)
{
  float c = a+b;
  cout<<c<<endl;
}

int main()
{
  add(1,2);
  add(0.5f,0.5f);
}
