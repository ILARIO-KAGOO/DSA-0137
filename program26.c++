#include<iostream>
using namespace std;
int main()
{
  int k=0;
  cout<<"Enter Rows:";
  cin>>k;
  for(int i=1;i<=k;i++)
  {
    int s = k-i;
    for(int a=1;a<=s;a++)
    {
      cout<<"  ";
    }
    for(int j=0;j<i;j++)
    {
      cout<<"* ";
    }
    cout<<endl;
  }
}