#include<iostream>
using namespace std;
class student{
    int a;
    public:
        student( int x) {cout<< ”In student constructor”<<endl; a=x ; }
        ~student( ) {cout<< ”In student constructor”<<endl;}
        virtual void show( ) { cout<< a<< endl;}
};
class teacher{
    int b;
    public:
        teacher( int x) {cout<< ”In teacher constructor”<<endl; b=x ; }
        ~ teacher( ) {cout<< ”In teacher destructor”<<endl;}
        void show( ) { cout<< b<< endl;}
};
class admin: public student, public teacher{
    int c;
    public:
        admin( int x, int y, int z): student(x), teacher(y) {
        cout<< ”In admin constructor”<<endl; c=z ; }
        ~ admin( ) {cout<< ”In teacher destructor”<<endl;}
        void show( ) { cout<< c<< endl;}
};
int main( ){
    int i= 0;
    student p;
    for (i = 0; i < 3; i++){
        admin obj(i+1, i+3, i+5);
        p = &obj;
        p-> show( );
}
return 0;
}
