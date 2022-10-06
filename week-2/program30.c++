#include<iostream>
using namespace std;

class number
{
  public:
    int a;
    void read(int d)
    {
      a = d;
    }
};

class square: public number
{
  public:
    void print()
    {
      cout << a*a<<endl;
    }
};

class cube: public number
{
  public:
    void print()
    {
      cout << a*a*a<<endl;
    }
};

int main()
{
  square obj;
  cube obj2;
  obj.read(2);
  obj.print();
  obj2.read(2);
  obj2.print();
}