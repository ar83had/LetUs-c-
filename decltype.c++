#include<iostream>
#include<typeinfo>
using namespace std;

int main(){
    int x=3;
    decltype(x)a=4.5;
    cout<<a;
    return 0;
}