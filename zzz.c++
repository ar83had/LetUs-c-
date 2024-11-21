#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

class String{
    private:
        string str;
    public:
        void display(){
            cout<<str;
        }
        friend istream& operator>>(istream& cin,String& obj);
        friend ostream& operator<<(ostream& cout,String& obj);
};

istream& operator>>(istream& cin,String& obj){
    cout<<"Enter String :";
    getline(cin,obj.str);
    return cin;
}

ostream& operator<<(ostream& cout,String& obj){
    cout<<"String :"<<obj.str;
    return cout;
};

int main(){

    String s1;
    cin>>s1;
    cout<<s1;
    return 0;
}