#include<iostream>

using namespace std;
// simaple inheritance

//it will ferder divided into three parts 1)public , protocted , and private inherutance

class parent{
    private:
        int a;
    protected:
        int b;
    public:
        int c;
        int d;
};

class child1:public parent{    //protocted and public remain same in child object;
    private:
        using parent::c;          //we are explictly convert piblic member into private;
    public:
    child1(int x,int y,int z){
        b=x;   //protocted
        c=y;   //private
        d=z;   //public
    }
    child1(){};
};

class child2:protected parent{   //protocted and public are converted into protected;
    public:
        using parent::c;
    child2(int x,int y,int z){
        b=x;c=y;d=z;   //b and d is procted and c is public 
    }
};

class child3:private parent{ //procted and public are converted into private;
    public:
        using parent::b;
    child3(int x,int y,int z){
        b=x;c=y;d=z;    //c and d is private and c is public;
    }
};

int main(){
    child1 c1(1,2,3);
    cout<<endl<<c1.d;
    //cout<<c1.c;  //it is inaccessable 


    child2 c2(1,2,3);
    cout<<endl<<c2.c;     //it is accessable due to explict convertion;
    return 0;
}