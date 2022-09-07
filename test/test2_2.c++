#include<iostream>
using namespace std;

class area
{
  public:
    area(char c,int a)
    {

      if(c == 'c')
      {
        int area = 3.14*a*a;
        cout<<"Area of circle:"<<area<<endl;
      }
      else if(c == 's')
      {
        int area = a*a;
        cout<<"Area of square:"<<area<<endl;
      }
    }
    area(int h,int b)
    {
      int area = h*b;
      area = area/2;
      cout<<"Area of triangle:"<<area<<endl;
    }
};

int main()
{
  area circle('c',2);
  area square('s',2);
  area triangle(2,3);
}