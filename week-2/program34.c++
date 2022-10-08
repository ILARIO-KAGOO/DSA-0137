#include<iostream>
using namespace std;

class student
{
  public:
    student(string s = "Unknown")
    {
      cout << "Name: " << s << endl;
    }
};

int main()
{
  student obj;
  student obj1("Sam");
}