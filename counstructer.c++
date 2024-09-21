//by default c compiler insert zero argument constructer function;
//if we and one argument constructer function then the default zero argument function also deleted;

#include<iostream>
using namespace std;

class Person{
    private:
    int age;

    public:
        Person(){};
        Person(int age2){
            age=age2;
        };
        int getAge(){
            cout<<endl<<"age :"<<age;
        }
};

int main(){
    Person p1;
    p1.getAge();
    Person p2=20;
    p2.getAge();
    return 0;
}