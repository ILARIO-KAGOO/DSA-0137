#include<iostream>
using namespace std;

class bank
{
  public:
    int Acc_no,Balance;
    string Name,Type;
    bank()
    {
      cout << "Enter Name: ";
      cin >> Name;
      cout << "Enter Acc_no: ";
      cin >> Acc_no;
      cout << "Enter Type: ";
      cin >> Type;
      cout << "Enter Balance(INR): ";
      cin >> Balance;
    }

    void deposit(int a)
    {  Balance+=a;}

    void withdraw(int a)
    {
      if (a < Balance)
      {
        Balance-=a;
      }
      else
        cout << "Insufficient Balance" << endl;
    }

    void display()
    {
      cout << "Acc_no:" << Acc_no << endl;
      cout << "Balance(INR):" << Balance << endl;
    }
};

int main()
{
  bank obj;
  obj.deposit(5000);
  obj.withdraw(2000);
  obj.display();
}