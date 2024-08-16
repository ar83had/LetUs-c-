#include<iostream>
using namespace std;

// struct complex{
//     int real;
//     float img;
// };

// complex setComplex(int,float);
// void displayComplex(complex);
// complex operator+(complex,complex);

// int main(){

//     complex c1 = setComplex(2,3.4);
//     complex c2 = setComplex(3,5.5);

//     displayComplex(c1);

//     complex c =c1+c2; 

//     displayComplex(c);
//     return 0;
// }

// complex setComplex(int real,float img){
//     complex temp;
//     temp.real=real;
//     temp.img=img;
//     return temp;
// }

// void displayComplex(complex c){
//     cout<<endl<<"real ="<<c.real<<", imaganary ="<<c.img;
//     return;
// }

// complex operator+(complex c1,complex c2){
//     complex temp;
//     temp.real = c1.real+c2.real;
//     temp.img=c1.img+c2.img;
//     return temp;
// }


                    //unary operater overloading;
class log{
    private:
    float n;
    int base;

    public:
    log(){
        n=0;
        base=0;
    }
    log(int n2,float base2=0){
        n=n2;
        base=base2;
    };

    log operator++(){
        n++;
        log temp(n,base);
        return temp;
    };

    log operator++(int){
        log temp(n,base);
        n++;
        return temp;
    };
    
    void displayLog(){
        cout<<endl<<n<<" base "<<base;
    }
};

int main(){
    log l1=10;
    log l2 = l1++;
    l2.displayLog();
    l1.displayLog();
    return 0;
}