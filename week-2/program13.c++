#include<iostream>
using namespace std;
void pr(int a)
{
  cout<<"Integer: "<<a<<endl;
}
void pr(float a)
{
  cout<<"Float: "<<a<<endl;
}

int main()
{
  int k=10;
  float g=10.10;
  pr(k);
  pr(g);
}