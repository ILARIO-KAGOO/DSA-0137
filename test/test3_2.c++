#include<iostream>
using namespace std;

class Area
{
  public:
    void area(int a)
    {
      int c = a*a;
      cout<<"Area of square: "<< c<<endl;
    }
    void area(int l, int b)
    {
      int a = l*b;
      cout<<"Area of rectangle: "<< a;
    }
};

int main()
{
  Area obj;
  obj.area(10);
  obj.area(2,10);
}