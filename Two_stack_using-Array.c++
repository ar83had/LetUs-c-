#include<iostream>
#include<vector>
using namespace std;

class TwoStack{
    private:
        int arr[10];
        int top1=-1;
        int top2=10;
    public:
        void push1(int el){
            if(top1+1>=top2 || top1==10)
            {
                cout<<"Overflow !";
                return;
            }

            arr[++top1]=el;
        }
        void push2(int el){
            if(top1>=top2-1 || top2==-1){
                cout<<"Overflow !";
                return;
            }

            arr[--top2]=el;
            return;
        }
        void display(){
            for(int c1=0;c1<10;c1++){
                cout<<" "<<arr[c1];
            }
            return;
        }
};

int main(){
    TwoStack s1;
    s1.push1(2);
    s1.push2(6);
    s1.push1(2);
    s1.push1(2);
    s1.push1(2);
    s1.push1(2);
    s1.push1(2);
    s1.push1(2);
    s1.push1(2);
    s1.push1(2);
    s1.display();
    return 0;
}