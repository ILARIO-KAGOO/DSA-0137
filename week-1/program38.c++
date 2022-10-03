#include<iostream>
using namespace std;

int main()
{
  int m=12,n=24,gcd,lcm,d=1;

  while(d<1000)
  {
    if (d%n==0 && d%m==0)
    {
      gcd=d;
      break;
    }
    d++;
  }
  lcm=(m*n)/gcd;
  cout<<"GCD: "<<gcd<<endl;
  cout<<"LCM: "<<lcm<<endl;
}