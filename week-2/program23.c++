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

class marks: public college
{
  public:
    marks()
    { cout << "c: "<< 20 <<endl;}
};   

class extracurricular: public college
{
  public:
    extracurricular()
    { cout << "D: "<< 25<<endl;}
};

int main()
{
  sem obj;
  marks obj1;
  extracurricular obj2;
}