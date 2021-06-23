#include<iostream>
#include<string>
using namespace std;

int main()
{
	int num1;
	float num2;
	double dbl;
	char ch;
	bool bol;
	string name, fullName;


	cout<<boolalpha;
	
	cout << "Enter full name ";
	getline(cin,fullName);

	cout << "Enter you age: ";
	cin >> num1;

	cout<<"Enter your nick name (cin) : ";
	cin>> name;
	cin.get(); //if we do not use this then cin will catch enter as a character

	cout << "Enter a double value: ";
	cin >> dbl;

	cout << "Enter your faviourite character: ";
	cin >> ch;

	cout << "Enter true or false: ";
	cin >> bol;

	cout << "Enter a float number: ";
	cin >> num2;

	cout << "String getline : " << fullName << endl;
	cout<<"nick name : "<<name<<endl;
	cout << "Int : " << num1<<endl;
	cout << "Float : " << num2 << endl;
	cout << "Double : " << dbl << endl;
	cout << "Character : " << ch << endl;
	cout << "Boolean : " << bol << endl;
	

	return 0;
}
