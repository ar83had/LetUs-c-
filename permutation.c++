#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int com(vector<char>&str,int n){
    int count=0;
    if(n<=0){
        for(auto el:str){
            cout<<el;
        }
        cout<<endl;
        return 1;
    }

    for(int c1=97;c1<=122;c1++){
        str[n-1]=c1;
        count+=com(str,n-1);
    }

    return count;
}

int main(){
    int n;
    cout<<"Enter length of string :";
    cin>>n;
    vector<char>str(n);
    int re = com(str,n);
    cout<<re;
    return 0;
}