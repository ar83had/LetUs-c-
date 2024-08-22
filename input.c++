#include<iostream>
using namespace::std;

int main(){
    char str[10];
    cin.getline(str,7,'\n');
    char str2[10];
    cin.ignore(10,'\n');
    cin.get(str2,4,'\n');
    cout<<str;
    cout<<str2;
    return 0;
};