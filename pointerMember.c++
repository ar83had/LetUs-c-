#include<iostream>
using namespace std;

struct demo
{
    private:
        int i;
    public:
        int j;
        demo(){};
        demo(int n){j=n;};
        void msg(){
            cout<<"Hi I am Arshad Shamim";
            return;
        }
};

ostream& tab(ostream& cout){
    cout<<'\t';
    return cout;
};

int main(){
    // int demo::*ptr=&demo::j;       //this pointer is accessable through all object and it always point variable j;
    // demo dobj(1);
    // demo d2(4);
    // demo* dptr = &dobj;
    // cout<<dobj.*ptr<<tab;                //pointer to memeber access by object;
    // cout<<dptr->*ptr<<endl;               //pointer tomember access by pointer ofobject;
    // dptr=&d2;
    // cout<<d2.*ptr<<tab<<dptr->*ptr;

    void (demo::*fptr)();          //pointer to memeber that point a function;
    fptr = &demo::msg;
    demo d1;
    (d1.*fptr)();
    return 0;
}