#include<iostream>
using namespace std;

int main()
{
    double num1, num2, num3, average;

    cout<<"Enter the value of first number : ";
    cin>>num1;
    cout<<"Enter the value of second number : ";
    cin >>num2;
    cout<<"Enter the value of third number : ";
    cin>> num3;
    average=(num1+num2+num3)/3;

    cout<<"Average is : "<<average<<endl;
    return 0;
}