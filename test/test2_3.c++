#include<iostream>
using namespace std;
int main()
{
  int a[3][3],b[3][3],c[3][3],i,j;

  cout<<"A matrix"<<endl;
  for(i=0;i<3;++i)
  {
    for(j=0;j<3;++j)
    {
      cout<<"Enter for A["<<i<<"]["<<j<<"]:";
      cin>>a[i][j];
    }
  }

  cout<<"B matrix"<<endl;
  for(i=0;i<3;++i)
  {
    for(j=0;j<3;++j)
    {
      cout<<"Enter for B["<<i<<"]["<<j<<"]:";
      cin>>b[i][j];
    }
  }

  for(i=0;i<3;++i)
  {
    for(j=0;j<3;++j)
    {
      c[i][j] = a[i][j]-b[i][j];
      cout<<"Result matrix C["<<i<<"]["<<j<<"]:";
      cout<<c[i][j]<<endl;
    }
  }
}