#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    vector<string> friends; //vector declaration without size
    vector<int> number(5); //vector declaration with size

    //Initializing value using push_back() method
    friends.push_back("Tuhin");
    friends.push_back("Nayeem");
    friends.push_back("Hamid");
    friends.push_back("Washim");
    friends.push_back("Alamin");

    for(string name: friends)
    {
        cout<<name<<endl;
    }

    friends.insert(friends.begin() + 2,"Jhon Baugh");

    cout<< endl;
    for(string name: friends)
    {
        cout<<name<<endl;
    }

    friends.pop_back();

    cout<< endl;
    for(string name: friends)
    {
        cout<<name<<endl;
    }
    return 0;
}
