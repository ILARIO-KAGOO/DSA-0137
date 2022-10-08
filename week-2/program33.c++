#include<iostream>
using namespace std;
int a[2][2] = {{1,2},{2,3}};
int b[2][2] = {{1,2},{2,3}};
int c[2][2];

// void get()
// {
//   for (int i = 0 ; i < 3 ; i++)
//   {
//     for (int j = 0 ; j < 3 ; j++)
//     {
//       cin >> a[i][j];
//     }
//   }
// }

void add ()
{
  for (int i = 0 ; i < 2 ; i++)
  {
    for (int j = 0 ; j < 2 ; j++)
    {
      c[i][j] = a[i][j] + b[i][j];
    }
  }
}



int main()
{
  add();
  for (int i = 0 ; i < 2 ; i++)
  {
    for (int j = 0 ; j < 2 ; j++)
    {
      cout << c[i][j] << " ";
    }
    cout << endl;
  }
}