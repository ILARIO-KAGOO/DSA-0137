#include<iostream>
using namespace std;

class college
{
  public:
    college()
    { cout << "a: "<< 10 << endl;}
};

class sem: public college
{
  public:
    sem()
    { cout<< "b: " << 15 << endl;}
};

class marks: public sem
{
  public:
    marks()
    { cout << "c: "<< 20 <<endl;}
};   