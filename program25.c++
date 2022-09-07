#include<iostream>
using namespace std;
int main()
{
  int k=0;
  cout<<"Enter Rows:";
  cin>>k;
  for(int i=0;i<k;i++)
  {
    for(int j=0;j<=i;j++)
    {
      cout<<"* ";
    }
    cout<<endl;
  }
}