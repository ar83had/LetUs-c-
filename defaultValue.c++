#include<iostream>
using namespace std;

int sum(int n1=0,int n2=0);
int main(){
    
    int re = sum(2);
    cout<<"sum of 2 and 0 is :"<<re;
    return 0;
}

int sum(int n1,int n2){
    return n1+n2;
}