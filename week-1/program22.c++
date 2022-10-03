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

class derived1 : public base
{
  public:
    void b()
    {
      cout<<"B"<<endl;
    }
};

class derived2 :public derived1
{
  public:
    void c()
    {
      cout<<"C"<<endl;
    }
};

int main()
{
  derived2 obj;
  obj.a();
  obj.b();
  obj.c();
}