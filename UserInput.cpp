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
	string fullName;


	cout<<boolalpha;

	cout << "Enter you full : ";
	cin >> fullName;

	string fuln;
	cout << "Enter f name " <<endl;
	getline(cin,fuln)

	cout << "Enter you age: ";
	cin >> num1;

	cout << "Enter a double value: ";
	cin >> dbl;

	cout << "Enter your faviourite character: ";
	cin >> ch;

	cout << "Enter true or false: ";
	cin >> bol;

	cout << "Enter a float number: ";
	cin >> num2;

	cout << "Int : " << num1<<endl;
	cout << "Float : " << num2 << endl;
	cout << "Double : " << dbl << endl;
	cout << "Character : " << ch << endl;
	cout << "Boolean : " << bol << endl;
	cout << "String cin : " << fullName << endl;

	return 0;
}
