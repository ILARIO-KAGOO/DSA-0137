#include<iostream>
using namespace std;

int main()
{
  int arr1[2][2],arr2[2][2],ans[2][2],c;
  cout << "Enter choice(1-add,2-subtract): ";
  cin >> c;
  switch(c)
  {
    case 1:
      for(int i=0;i<2;i++)
      {
        for(int j=0;j<2;j++)
        {
          ans[i][j] = arr1[i][j]+arr2[i][j];
        }
      }
      break;
    case 2:
      for(int i=0;i<2;i++)
      {
        for(int j=0;j<2;j++)
        {
          ans[i][j] = arr1[i][j]-arr2[i][j];
        }
      }
      break;
    default:
      cout<<"Invalid choice";
      break;
  }

  for(int i=0;i<2;i++)
    {
      for(int j=0;j<2;j++)
        {
          cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}