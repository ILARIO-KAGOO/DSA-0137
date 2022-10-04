#include<iostream>
using namespace std;

int main()
{
  int n,count=0;
  cout<<"Enter Number: ";
  cin >> n;
  for (int i=2;i<n;i++)
  {
    if (n%i == 0)
    {
      cout<<n<<" is not a prime number";
      count++;
    }
  }
  if (count == 0)
  {
    cout<< n << " is a prime number";
  }
}