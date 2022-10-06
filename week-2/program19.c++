#include<iostream>
using namespace std;

void Volume(int r)
{
  int volume = 1.33f * 3.14f * r * r * r;
  cout << "Volume of circle:" <<volume<<endl;
}

void Volume(int b,int h,int l)
{
  int volume = 0.5 * b * h * l;
  cout << "Volume of triangle:" <<volume<<endl;
}

void Volume(float a)
{
  float volume = a * a * a;
  cout << "Volume of square:" <<volume<<endl;
}

void Volume(float l, float b, float h)
{
  float volume = l * b * h;
  cout << "Volume of rectangle:" <<volume<<endl;
}

int main()
{
  Volume(1,2,3);
  Volume(1);
  Volume(1.2f,2.2f,3.2f);
  Volume(2.2f);
}
