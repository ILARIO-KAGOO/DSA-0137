#include<iostream>
using namespace std;

class calculator
{
  public:
    calculator(int d,int e)
    {
        cout << d <<" + " << e << " : " << d+e<<endl;
    }
    calculator(int d,float e)
    {
        cout << d <<" - " << e << " : " << d-e<<endl;
    }
    calculator(float d,int e)
    {
        cout << d <<" * " << e << " : " << d*e<<endl;
    }
    calculator(float d,float e)
    {
      cout << d <<" / " << e << " : " << d/e<<endl;
    }
};

int main()
{
  calculator obj(float(1),float(2));
}
      // switch(c)
      // {
      //   case '+':
      //     cout << a <<" + " << b << " : " << a+b<<endl;
      //     break;
      //   case '-':
      //     cout << a <<" - " << b << " : " << a-b<<endl;
      //     break;
      //   case '*':
      //     cout << a <<" * " << b << " : " << a*b<<endl;
      //     break;
      //   case '/':
      //     cout << a <<" / " << b << " : " << a/b<<endl;
      //     break;
      //   default:
      //     cout << "Invalid Choice(only +,-,*,/)";
      //     break;
      // }