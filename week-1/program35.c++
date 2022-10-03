#include <iostream>
using namespace std;

int main()
{
    int space, rows;

    cout <<"Enter number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; ++i)
    {
        for(space = 1; space <= rows-i; ++space)
        {
            cout <<"  ";
        }
        int s =2*i-1;
        for (int g = 1;g<=s;g++)
        {
            if(g==1||g==s||i==rows)
                cout << "* ";
            else
            {
                cout<<"  ";
            }
        }
        cout << endl;
    }    
    return 0;
}