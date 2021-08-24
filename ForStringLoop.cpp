#include<iostream>
#include<string>
using namespace std;

int main()
{
    string name[5];
    string address[5];
    string food[5];


    /*cout<<"Enter value for name : "<<endl;
    for(int i=0; i<5; i++)
    {
        getline(cin,name[i]);
    }
    cout<<"\n"<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<name[i]<<endl;
    }*/


    //The important loop for string (range based for loop)
    cout<<"Enter value for food : \n"<<endl;
    for(int i=0; i<5; i++)
    {
        cin>>food[i];
    }

    for(string x:food)//this special loop is value based and it directly iterates values of an array
    {
        cout<<x<<endl;
    }

    cout<<"Enter value for address : \n"<<endl;
    for(int i=0; i<5; i++)
    {
        cin>>address[i];
    }

    //using auto we can let c++ to find out the datatype by itself
    for(auto y: address)
    {
        cout<<y<<endl;
    }


}
