#include<iostream>
using namespace std;

void Area(int r)
{
  int area = 3.14*r*r;
  cout << "Area of circle:" <<area<<endl;
}

void Area(int b,int h)
{
  int area = 0.5 * b * h;
  cout << "Area of triangle:" <<area<<endl;
}

void Area(float a)
{
  float area = a*a;
  cout << "Area of square:" <<area<<endl;
}

void Area(float l, float b)
{
  float area = l*b;
  cout << "Area of rectangle:" <<area<<endl;
}

int main()
{
  Area(1,2);
  Area(1);
  Area(1.2f,2.2f);
  Area(2.2f);
}
