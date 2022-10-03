#include<iostream>
using namespace std;

int main()
{
  int x=10,y=20;
  cout<<"x="<<x<<endl;
  cout<<"y="<<y<<endl;
  swap(x,y);
  cout<<"x(after swapping)="<<x<<endl;
  cout<<"y(after swapping)="<<y<<endl;
}

void swap(int x, int y)
{
  int temp;
  temp = x;
  x = y;
  y = temp;
}