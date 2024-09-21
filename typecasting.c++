#include<iostream>
using namespace std;

class base{
    private:
        int n1;
    public:
        base(int n1){
            this->n1=n1;
        }
        base(){};
        virtual void displayBase(){
            cout<<'\t'<<n1;
            return;
        }
};

class derived :public base{
    private:
        int n2;
    public:
        int num=2;
        derived(int n1,int n2):base(n1){
            this->n2=n2;
        }
        derived(){};
        void displayDerived(){
            displayBase();
            cout<<n2<<endl;
        }

};


int main(){
                                    //statiCast
    // int i=65;
    // char ch=i;
    // cout<<ch<<endl;
    // char ch2=static_cast<char>(i);
    // cout<<ch2<<endl;

    // void* ptr;
    // string name="arshad";
    // char str[]="arshad";
    // int n=23;
    // ptr = static_cast<void*>(&name); //void pointer is not for read operation
    // string* sptr = static_cast<string*>(ptr);
    // cout<<(*sptr);

                                //dynamic casting
    
    // base bobj(1);
    // derived dobj(1,2);
    // derived* dptr;
    // base* bptr=&dobj;
    // dptr = dynamic_cast<derived*>(bptr); //atleast one virtual function;
    // bptr->displayBase();  //late binding for just only virtual function
    // dptr->displayDerived();

                                //const_cast                           
    // string name="arshad";
    // const string* ptr=&name;
    // const string& ref = name;
    // cout<<*ptr<<endl;        //display "arshad";
    // //*ptr="irshad";  //due to const nature of ptr it will not possiable;
    // ptr = const_cast<string*>(ptr);
    // cout<<*ptr<<endl;

                                //reinterpret_cast
    base bobj(1);
    derived dobj(2,3);
    derived* dptr = &dobj;
    base* bptr = reinterpret_cast<base*>(dptr);  //it fourcly convert derived pointer into base pointer;
    bptr->displayBase();      //it will an unexpacted error;
    return 0;
}