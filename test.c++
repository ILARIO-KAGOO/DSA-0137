#include<iostream>
using namespace std;
string error()
{    return "no way";}

int main()
{
    try
    {
        int age = 15;
        if (age >= 18)
        {
            cout << "ok";
        }
        else
        {
            throw(error());
        }
    }
    catch(string e)
    {
        cout<<e<<'\n';
    }
    
}