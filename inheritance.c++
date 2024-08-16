#include<iostream>
using namespace std;

// class Person{
//     protected:
//         char* name;
//         int age;
//     public:
//         void display(){
//             cout<<"name"<<name;
//             cout<<endl<<"age :"<<age;
//         };
//         void setPerson(char* n,int a){
//             name=n;
//             age=a;
//         }
// };

// class Student : public Person{
//     protected:
//         int id;
//     public:
//         void setId(int i){
//             id=i;
//         }
//         void display(){
//             cout<<"name :"<<name<<endl<<"age :"<<age<<endl<<"id :"<<id;
//         }
// };

// int main(){
//     Student arshad;
//     arshad.setPerson("arshad",20);
//     arshad.setId(020);
//     arshad.display(); 
//     return 0;
// }

class Base{
    protected:
        int x;
    public:
        Base(){};
        Base(int a){
            x=a;
        }
};

class Derived : public Base{
    protected:
        int y;
    public:
        Derived(){};
        // Derived(int a,int b):Base(b){  //way of inisilized Base class variable;
        //     y=a;
        // }

        Derived(int a,int b){   //another way of doing(inisilized base class variable);
            x=a;
            y=b;
        }
        Derived(int a){
            y=a;
        }

        void display(){
            cout<<" "<<x<<" "<<y;
        }
};

int main(){
    Derived o1(2,3);
    o1.display();

    Derived o2=5;
    //o2.display();
    return 0;
}