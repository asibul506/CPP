/*
iostream>
#include<string>
using namespace std;

class details{
    public:
        string Name;
        string id;
        int phone;
        string email;
        string password;
        void disply_property()
        {
            cout<<Name<<"  "<<phone<< "  "<<id<<"  "<<email<<"  "<<password;
        }


};

int main()
{
    details nahid, sahid;

    nahid.Name="MD NAHID HASAN";
    nahid.id="Roja ka lover";
    nahid.phone=1853381815;
    nahid.email="nahid@gmail.com";
    nahid.password="NahidRoja";

    nahid.disply_property();
    
    
    /*
    getline(cin,nahid.Name);
    getline(cin,nahid.email);
    //getline(cin,nahid.phone);
    //getline(cin,nahid.id);
    getline(cin,nahid.password);
    */
    return 0;
}*/
#include<iostream>
using namespace std;
class Animale
{
public:
    int age;
    string name , extra_info;
     set_value(int a , string n , string  x)
    {
        age=a;
        name=n;
        extra_info=x;

    }
    set_value()
    {
     cout<<"Name:"<<name<<" "<<"Age:"<<age<<" "<<extra_info<<endl;
    }
};
int main()
{
    Animale zebra,dolphin;
    zebra.name ="Zebra";
    zebra.age = 2;
    zebra.extra_info="years old. The zebra comes from Africa.";
    dolphin.name="Dolphin";
    dolphin.age=3;
    dolphin.extra_info="years old. The dolphin comes from New Zeland.";
    zebra.set_value();
    dolphin.set_value();

    return 0;
}