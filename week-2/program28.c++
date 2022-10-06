#include<iostream>
using namespace std;

class student
{
  public:
    int fees,accno;
    void get_student(int a,int b)
    {
      fees = a;
      accno = b;
    }
};

class bank: public student
{
  public:
    void print_bank()
    {
      int paid=fees;
      cout<<"acc_no:"<<accno<<"\npaid_fees: "<<paid<<"\nfees: "<<fees;
    }
};

int main()
{
  student obj;
  bank obj2;
  obj2.get_student(1,2);
  obj2.print_bank();
}