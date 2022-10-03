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

void dec_bin(int n)
{
  int arr[100];
  int i = 0;
  while (n > 0) 
  {
 
    arr[i] = n % 2;
    n = n / 2;
    i++;
  }
  for (int j = i - 1; j >= 0; j--)
    cout << arr[j];
}
int main()
{
  dec_bin(3);
}