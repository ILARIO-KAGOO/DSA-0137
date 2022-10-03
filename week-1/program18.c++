#include<iostream>
using namespace std;

class a
{
  public:
    a(int c,int b)
    {
      cout<<c<<endl<<b<<endl<<"1st constructor"<<endl;
    };
    a(int a)
    {
      cout<<a<<endl<<"2nd constructor"<<endl;
    };
};


int main()
{
  a obj(20,30);
  a obj1(20);

}