#include<iostream>
#include<cstdlib>
#include<cstring>

using namespace std;

class String{
    private:
        char str[30];
    public:
        void displayStr(){
            cout<<endl<<str;
        };
        String(){};
        String(char* arr){
            strcpy(str,arr);
        };
        String(int num){
            itoa(num,str,10);
        };
        operator int(){
            int num=0;
            int pow=1;
            int c1=0;
            while(str[c1]!=0){
                int dig = str[c1++]-'0';
                num*=10;
                num+=dig;
            };

            return num;
        };
        char* getString(){
            return str;
        };
};

class Log{
    private:
        int base,number;
    public:
        Log(){};
        Log(int nu,int ba=2.7){
            number=nu;
            base=ba;
        };
        Log(String str,int ba=2){
            int num = int(str);
            number=num;
            base=ba;
        };
        void display(){
            cout<<endl<<"number :"<<number<<"  base :"<<base;
        }
};

int main(){

    String name = "arshad";
    String num = "122";
    num.displayStr();
    String num2 = 112;     //int to user difined data type;
    num2.displayStr();
    int num3 = int(num);    //user defined (String) to int;
    cout<<endl<<num3;

    Log l1(10,2);
    l1.display();
    Log l2=num;
    l2.display();
    return 0;
}