#include<iostream>
#include<string>
using namespace std;

int main()
{
    string fullName, location;
    int initialScore;

    cout<< "Enter your full name : ";
	getline(cin,fullName);
	cout<< "Enter your location (city, state/province and country : ";
	getline(cin, location);
	cout<<"Enter an integer 0 to 100 : ";
	cin>>initialScore;

	cout <<"\nHello " << fullName << endl;
    cout<<"We heard you are from " <<location<<endl;
    cout<<"Your original score is "<<initialScore<<" but with five points added your score is now "<<(initialScore+5);
}
