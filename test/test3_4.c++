#include<iostream>
using namespace std;

class RBI
{
  public:
  int inte_rate =4,min_bal=1000;
};

class SBI: public RBI
{
  public:
    int inte_rate1=6,min_bal1=5000;
    SBI()
    {
      cout<<"RBI int_rate: "<<inte_rate<<endl;
      cout<<"SBI int_rate: "<<inte_rate1<<endl;
      cout<<"RBI min_bal: "<<min_bal<<endl;
      cout<<"SBI min_bal: "<<min_bal1<<endl;
    }
};

class ICICI: public RBI
{
  public:
    int inte_rate2=7,min_bal2=6000;
    ICICI()
    {
      cout<<"RBI int_rate: "<<inte_rate<<endl;
      cout<<"ICICI int_rate: "<<inte_rate2<<endl;
      cout<<"RBI min_bal: "<<min_bal<<endl;
      cout<<"ICICI min_bal: "<<min_bal2<<endl;
    }
};

int main()
{
  SBI obj1;
  ICICI obj2;
}