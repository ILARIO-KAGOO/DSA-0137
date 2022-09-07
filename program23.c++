#include<iostream>
using namespace std;

class base
{
  public:
    base()
    {
      cout<<"A"<<endl;
    }
};

class derived1: public base
{
  public:
    derived1()
    {
      cout<<"B"<<endl;
    }
};

class derived2: public base
{
  public:
    derived2()
    {
      cout<<"C"<<endl;
    }
};

class derived3: public base
{
  public:
    derived3()
    {
      cout<<"D"<<endl;
    }
};

int main()
{
  derived1 obj1;
  cout<<endl;
  derived2 obj2;
  cout<<endl;
  derived3 obj3;
}