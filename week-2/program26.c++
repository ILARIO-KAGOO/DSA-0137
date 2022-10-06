#include<iostream>
using namespace std;

class student
{
  public:
    student()
    { cout<<"a: "<<10<<endl;}
};

class college: public student
{
  public:
    college()
    { cout<<"b: "<<15<<endl;}
};

class home: public student
{
  public:
    home()
    { cout<<"c: "<<20<<endl;}
};

class tution: public student
{
  public:
    tution()
    { cout<<"d: "<<25<<endl;}
};

class oops: public college
{
  public:
    oops()
    { cout<<"e: "<<30<<endl;}
};

class work: public home
{
  public:
    work()
    { cout<<"f: "<<35<<endl;}
};

class html: public tution
{
  public:
    html()
    { cout<<"g: "<<40<<endl;}
};

class job: public oops , public work , public html
{
  public:
    job()
    { cout<<"h: "<<45<<endl;}
};

int main()
{
  college obj;
}