#include<iostream>
using namespace std;

class base
{
  public:
    void area(int l,int b)
    {
      cout << "Area of rectangle: " << l*b << endl;
    }

    void area(int a)
    {
      cout << "Area of square: " << a*a << endl;
    }
};

int main()
{
  base obj;
  obj.area(2,3);
  obj.area(2);
}