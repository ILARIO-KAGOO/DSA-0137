#include<iostream>
using namespace std;
int count=0;
int pow(int i,int n)
{
  int s=1;
  for(int j=1;j<=n;j++)
  {
    s*=i;
  }
  return s;
}

void bin_dec(int i)
{
  int r,s;
  while(i!=0)
  {
    r=i%10;
    s += r*pow(2,count);
    count++;
    i/=10;
  }
  count=0;
  cout<<"decimal: "<<s<<endl;
}

void dec_bin(int i)
{
  int q=i,r=0,s=0;
  while(q!=1)
  {
    r=q%2;
    s=r*10+s;
    q/=2;
    r=0;
  }
  s=q*10+s;
  cout<<"Decimal to Binary: "<<s;
}
int main()
{
  dec_bin(3);
}