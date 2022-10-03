#include<iostream>
using namespace std;

class count
{
  int value;
  public:
    count(int i=5)
    {
      value = i;
    }

    void operator ++()
    {
      ++value;
    }

    void display()
    {
      cout<<value;
    }
};

int main()
{
  count count1;
  ++count1;
  count1.display();
}