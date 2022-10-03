#include<iostream>
using namespace std;

int main()
{
  int total,staff,n,sum;
  cout<<"Total users: ";
  cin>>total;
  cout<<"Staff users: ";
  cin>>staff;
  n= staff/3;
  sum = total-staff-n;
  if(sum>=0)
  {
  cout<<"Student users: "<<sum;
  }
  else
  {
    cout<<"Invalid";
  }
}