#include<iostream>
using namespace std;

int main()
{
  int n,sum=0,temp;
  cout << "Enter the number: ";
  cin >> n;
  temp = n;
  while (temp>0)
  {
    int i = temp%10;
    sum+=i*i*i;
    temp/= 10;
  }
  if (sum == n)
  {  cout<<n<<" is a armstrong number";}
  else
  {  cout<<n<<" is not a armstrong number";}
}