#include<iostream>
using namespace std;

int main()
{
  int k=0;
  cout<<"Enter Rows:";
  cin>>k;
  for(int i =k;i>=0;i--)
  {
    for(int j=i;j>0;j--)
    {
      cout<<"* ";
    }
    cout<<endl;
  }
}