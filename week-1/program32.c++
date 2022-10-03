#include<iostream>
using namespace std;

int main()
{
  int n,sum,q,p;
  cout<<"Enter Number:";
  cin>>n;
  p=n;
  while(p!=0)
  {
    q= p%10;
    sum+=q*q*q;
    q=0;
    p/=10;
  }
  if(n==sum)
  {
    cout<<n<<" is an armstrong number.";
  }
  else
  {
    cout<<n<<" is not an armstrong number";
  }
}