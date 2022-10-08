#include<iostream>
using namespace std;
class animal
{
  public:
    animal(float a, float b, float c, float d)
    {
      cout << "Cage_no: " << b << endl;
      cout << "Height: " << c << endl;
      cout << "Weight: " << d << endl;
      cout << "Pass_value: " << a << endl;
      cout << "\n\n" << endl;
    }
};

int main()
{
  animal obj(2.3,1,50,50);
  animal obj1(2.5,2,60,40);
}