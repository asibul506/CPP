#include<iostream>
using namespace std;

int main()
{
    int myNum = 50;
    bool MyBool = true;
    double D= 454.35;
    float F= 3.1416;
    char Ch='A';
    string s ="Fahim";

    cout<< myNum<<endl;
    cout<<"Boolean Value : " <<MyBool<<endl;
    cout<<D<<endl;
    cout<<F<<endl;
    cout<<Ch<<endl;
    cout<<s<<endl;
    cout<<"Hello "<<s<< "how" <<D<< " " <<Ch<< " " <<F<< " "<<myNum<<endl;

    //Boolalpha
    bool alpha1= true;
    bool alpha2=false;
    bool alpha3=true;

    cout<<boolalpha <<alpha3<<endl;

    cout<<boolalpha<<endl;
    cout<<alpha1<<endl;
    cout<<alpha2<<endl;


    return 0;
}
