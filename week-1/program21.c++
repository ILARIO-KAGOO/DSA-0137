#include<iostream>
using namespace std;

class base
{
  public:
    void a()
    {
      cout<<"A"<<endl;
    }
};

class base2
{
  public:
    void b()
    {
      cout<<"B"<<endl;
    }
};

class derived : public base, public base2
{
  public:
    void c()
    {
      cout<<"C"<<endl;
    }
};

int main()
{
  derived obj;
  obj.a();
  obj.b();
  obj.c();
}