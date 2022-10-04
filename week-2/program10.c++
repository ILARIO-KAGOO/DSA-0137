#include<iostream>
using namespace std;
void ch(int a)
{
  a+=5;
  cout<<a<<endl;
}

int main()
{
  int a=5;
  cout<<a<<endl;
  ch(a);
  cout<<a<<endl;

}