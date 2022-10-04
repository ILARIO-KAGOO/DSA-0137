#include<iostream>
using namespace std;
void sum(int x , int y);

int main()
{
  int a=5,b=6;
  sum(a,b);
}

void sum(int x, int y)
{
  cout<<x+y;
}