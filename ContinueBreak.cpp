#include<iostream>
using namespace std;

int main()
{
    int i;

    for (i=0; i<10; i++)
    {
        if (i==4)
        {
            break; 
        }
        cout<<i<<endl;
    }

    cout<<endl;

    int j = 0;
    while (j<=20)
    {
        if(j%2==0)
        {
            j++;
            continue;
        }
        cout<<j<<endl;
        j++;
    }
    
}