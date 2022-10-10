#include<iostream>
using namespace std;

void area(int l , int b)
{ cout<<"Area Of Rectangle: "<< l*b<<endl;}

void area(int a)
{ cout<<"Area Of Rectangle: "<< a*a<<endl;}

int main()
{
  area(2,5);
  area(4);
}