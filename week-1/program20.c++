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

class derived : public base
{
  public:
    void b()
    {
      cout<<"B"<<endl;
    }
};

int main()
{
  derived obj;
  obj.a();
  obj.b();
}