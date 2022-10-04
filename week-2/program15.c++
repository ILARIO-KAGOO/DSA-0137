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
    sum+=i;
    temp/= 10;
  }
  if (n%sum == 0)
  {  cout<<n<<" is an harshad number";}
  else
  {  cout<<n<<" is not an harshad number";}
}