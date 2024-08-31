#include<iostream>
using namespace std;

int sum(int n1,int n2){
    return n1+n2;
};

int main(){
    int(*fptr)(int,int);
    fptr = sum;
    cout<<(*fptr)(1,2);
    return 0;
}