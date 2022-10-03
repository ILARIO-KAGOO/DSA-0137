#include<iostream>
using namespace std;

int main()
{
  int i,j,k,r,c;
  cin>>r;
  cin>>c;
  for (i=0;i<=r;i++)
  {
    for(j=0;j<c;j++)
    {
      if(i==0||i==r)
      {
        for(j=0;j<=c;j++)
        {
          cout<<"*";
        }  

      }
      else
      {
        for(j=0;j<=c;j++)
        {
          if (j==0 || j==c)
          {
            cout<<"*";
          }
          else
          {
            cout<<" ";
          }
        }
        
      }
      
    }
      cout<<endl;
  }
}