#include<iostream>
#include<fstream>
#include<sstream>

using namespace std;

int main(){
    ostringstream s;
    string name;
    int age;
    cin>>name>>age;
    s<<"hi my name is "<<name<<"and i am "<<age<<"year old";
    cout<<s.str();

    string str="arshad 20000";
    istringstream o(str);
    o>>name>>age;
    cout<<name<<age;
    return 0;
}