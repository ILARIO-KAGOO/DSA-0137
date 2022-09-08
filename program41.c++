#include<iostream>
using namespace std;

int main()
{
  int i,count=20;
  cout<<"Numbers from 1-20 which are not multiples of 3:";
  for ( i = 0; i <= count; i++)
  {
    if(i%3!=0)
      cout<<i<<endl;
    else
      continue;
  }
}