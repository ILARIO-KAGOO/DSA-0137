#include<iostream>
using namespace std;

class college
{
  public:
    college()
    { cout << "a: "<< 10 << endl;}
};

class sem
{
  public:
    sem()
    { cout<< "b: " << 15 << endl;}
};

class marks: public college , public sem
{
  public:
    marks()
    { cout << "c: "<< 20 <<endl;}
};

int main()
{
  marks obj;
}