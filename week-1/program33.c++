#include<iostream>
using namespace std;

int main()
{
  int n=0,p=0,sum=0,q;
  cout<<"Enter Number:";
  cin>>n;
  p=n;
  while(p!=0)
  {
    q=p%10;
    sum+=q;
    p/=10;
  }
  if(n%sum==0)
  {
    cout<<n<<" is a harshad no";
  }
  else
  {
    cout<<n<<" is not a harshad no.";
  }
}