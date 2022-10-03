#include<iostream>
using namespace std;

void rev(int a)
{
  int q=0,s=0;
  while (a!=0)
  {
    q=a%10;
    s = s*10+q;
    a/=10;
  }
  cout<<"reverse of given number: "<<s;
}

int main()
{
  int s;
  cin>>s;
  rev(s);
}