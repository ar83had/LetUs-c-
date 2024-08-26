#include<iostream>
using namespace std;

ostream& tab(ostream& cout){
    cout<<'\t';
    return cout;
}

class log{
    private:
        int base=10;
        int data;
    public:
        log(){};
        log(int data){
            this->data=data;
        }
        log(int data,int base){
            this->data=data;
            this->base=base;
        }

        friend ostream& operator<<(ostream& cout,log obj){
            cout<<"log"<<obj.data<<" (base:"<<obj.base<<")";
            return cout;
        }
};

int main(){
    cout<<"Arshad"<<tab<<"Shamim";
    cout<<endl<<log(20,2);
    return 0;
}