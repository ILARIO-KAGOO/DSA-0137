#include<iostream>
using namespace std;

class add
{
  public:
    void addf(int a , int b , char c)
    {
      if (c == '+')
      {
        cout << a <<" + " << b << " : " << a+b<<endl;
      }
    }
};
class sub
{
  public:
    void subf(int a , int b , char c)
    {
      if (c == '-')
      {
        cout << a <<" - " << b << " : " << a-b<<endl;
      }
    }
};
class mul
{
  public:
    void mulf(int a , int b , char c)
    {
      if (c == '*')
      {
        cout << a <<" * " << b << " : " << a*b<<endl;
      }
    }
};
class div
{
  public:
    void divf(int a , int b , char c)
    {
      if (c == '/')
      {
        cout << a <<" / " << b << " : " << a/b<<endl;
      }
    }
};

class calculator: public add, public sub, public mul, public div
{
  public:
    calculator(int a , int b , char c)
    {
      addf(a,b,c);
      subf(a,b,c);
      mulf(a,b,c);
      divf(a,b,c);
    };
    
};

int main()
{
  calculator obj(5,2,'+');
}