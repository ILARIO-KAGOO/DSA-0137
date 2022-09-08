#include<iostream>
using namespace std;

class degree
{
  public:
    void getdegree()
    {
      cout<<"I got a degree"<<endl;
    }
};

class undergraduate: public degree
{
  public:
    void getdegree1()
    {
      getdegree();
      cout<<"I am an undergraduate"<<endl;
    }
};

class postgraduate: public degree
{
  public:
    void getdegree1()
    {
      getdegree();
      cout<<"I am a postgraduate"<<endl;
    }
};

int main()
{
  undergraduate obj1;
  postgraduate obj2;
  obj1.getdegree1();
  obj2.getdegree1();
}