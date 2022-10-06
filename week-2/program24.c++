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

class extracurricular: public marks, public sem
{
  public:
    extracurricular()
    { cout << "D: "<< 25<<endl;}
};

int main()
{
  extracurricular obj2;
}