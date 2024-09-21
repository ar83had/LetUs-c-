#include<iostream>
using namespace std;

class demo{
    private:
    int age;
    static int count;
    public:
        void display();
        demo(int ag){
            age=ag;
            count++;
        };
        demo(){count++;};
};

void demo::display(){
    cout<<endl<<age;
};

int demo::count=0;  //static member;

int main(){
    demo d1;
    d1.display();
    demo d2=demo(20);
    d2.display();
    return 0;
}