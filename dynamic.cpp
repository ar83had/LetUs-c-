#include<iostream>
using namespace std;

int main(){
    int* p = new int;
    *p=5;
    cout<<p<<*p<<endl;
    cout<<"size of p and *p is"<<sizeof(p)<<sizeof(*p);
    return 0;
}