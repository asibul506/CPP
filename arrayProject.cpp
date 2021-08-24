#include<iostream>
#include<string>
using namespace std;

int main()
{
    int num[5], i;

    for(i=0; i<5; i++)
    {
        cout<<"Enter the value : ";
        cin>>num[i];
    }

    for(auto temp:num)
    {
        cout<<temp*2<<endl;
    }

        
    return 0;
}