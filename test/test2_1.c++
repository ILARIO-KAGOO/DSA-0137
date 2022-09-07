#include<iostream>
using namespace std;

class base1
{
  public:
    base1()
    {
      cout<<"A"<<endl;
    }
};

class base2
{
  public:
    base2()
    {
      cout<<"B"<<endl;
    }
};

class derived1: public base1
{
  public:
    derived1()
    {
      cout<<"C"<<endl;
    }
};

class derived2: public base1 , public base2
{
  public:
    derived2()
    {
      cout<<"D"<<endl;
    }
};

int main()
{
  derived1 obj3;
  derived2 obj4;
}