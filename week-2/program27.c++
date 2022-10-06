#include<iostream>
using namespace std;

class bank
{
  public:
    float interest = 1.5;
};

class sbi: public bank
{
  public:
    float interest = 2.5;
};

class icici: public bank
{
  public:
    float interest = 3.5;
};
class axis: public bank
{
  public:
    float interest = 4.5;
};

int main()
{
  bank obj;sbi obj2;icici obj3;axis obj4;
  cout << obj.interest<<endl;
  cout << obj2.interest<<endl;
  cout << obj3.interest<<endl;
  cout << obj4.interest<<endl;
}
