#include<iostream>
using namespace std;

int main()
{
    int x=10, y, z;

    if(x>9)
        y=100;
    else
        y=200;

    z = x<9 ? 100:200;

    cout<<y<<endl;
    cout<<z<<endl;
}
