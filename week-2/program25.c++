#include<iostream>
using namespace std;

class base1
{
  public:
    base1()
    { cout << "a: " << 10 << endl;}
};

class base2
{
  public:
    base2()
    { cout << "b: " << 15 << endl;}
};

class derived1: public base1
{
  public:
    derived1()
    { cout << "b: " << 15 << endl;}
};

class derived2: public base1, public base2
{
  public:
    derived2()
    { cout << "d: " << 25 << endl;}
};

class derived3: public derived2, public base2
{
  public:
    derived3()
    { cout << "d: " << 25 << endl;}
};

int main()
{
  derived1 obj;
  derived3 obj1;
}