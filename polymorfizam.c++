#include<iostream>
using namespace std;

class Parent{
    public:
        virtual void fn(){
            cout<<endl<<"hello Parent";
        }

        ///virtual void fn()=0; //an alternative method and made a abstract class;
};

class Derived1{
    public:
        void fn(){
            cout<<endl<<"hello derived 1";
        }
};

class Derived2{
    public:
        void fn(){
            cout<<endl<<"hello derived 2";
        }
};

int main(){
    Derived1 d11;
    d11.fn();

    Derived2 d21;
    d21.fn();

    Parent p1;    //it will not work if we vertitual fn as 0 body;
    p1.fn();
    return 0;
}