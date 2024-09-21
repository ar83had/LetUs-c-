#include<iostream>
using namespace std;

int& demo();

int a=3;
int b=5;

int main(){
    demo()=b;
    cout<<endl<<"a="<<a<<endl<<"b="<<b;
    return 0;
}

int& demo(){
    cout<<"before function call a ="<<a;
    return a;
}