#include<iostream>


//if we solve case when 1,2,3 disk case then all case auto matic solved;
//n-1 disk source to helper then  nth disk s-->d;
//n-1 disk helper -->destination
using namespace std;
int towerofhonie(int n,char s,char h,char d){
    int static count=0;
    if(n==1)
    {
        cout<<endl<<"Disk("<<n<<')'<<'\t'<<s<<"---->"<<d;
        return 1;
    }
    int m1 = towerofhonie(n-1,s,d,h);
    cout<<endl<<"Disk("<<n<<')'<<'\t'<<s<<"---->"<<d;
    int m2 = towerofhonie(n-1,h,s,d);
    return m1+1+m2;
}

int main(){
    int n;
    cout<<"Enter Number of Disk :";
    cin>>n;

    int count  = towerofhonie(n,'A','B','C');
    cout<<endl<<"Number of operation :"<<count;
    return 0;
}