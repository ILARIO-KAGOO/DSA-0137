// #include<iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     char str[100];
//     cin>>str;
//     strrev(str);
//     cout << str << endl;
//     return 0;
// }


#include<iostream>
using namespace std;
class Rectangle
{
    public:
        int l,b;
        Rectangle()
        {
            l=0;
            b=0;
            cout<<"Area: "<<l*b<<endl;
        }
        Rectangle(int a, int c)
        {
            l=a;
            b=c;
            cout<<"Area: "<<l*b<<endl;
        }
        Rectangle(int a)
        {
            l=a,b=a;
            cout<<"Area: "<<l*b<<endl;
        }
};
int main()
{
    Rectangle obj;
    Rectangle obj1(3,3);
    Rectangle obj2(3);
}