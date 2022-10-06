#include<iostream>
using namespace std;

class student
{
  public:
    int num,marks;
    void read(int a, int b)
    {
      num = a;
      marks = b;
    }
};

class student1:public student
{
  public:
    void print()
    {
      cout<<num<<","<<marks<<endl;
    }
};


int main()
{
  student1 obj1;
  obj1.read(2,3);
  obj1.print();
}