#include<iostream>
using namespace std;

int main()
{
  int m=20,n=30,gcd,lcm,d=1;

  while(true)
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