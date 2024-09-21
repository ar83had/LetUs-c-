#include<iostream>
using namespace std;


                        //friend function ;
// class demo{
//     private:
//         int n1;
//     protected:
//         int n2;
//     public:
//         int n3;
//         demo(){};
//         demo(int n1,int n2,int n3){
//             this->n1=n1;
//             this->n2=n2;
//             this->n3=n3;
//         }
//         friend ostream& operator<<(ostream& cout,demo& obj); //not memeber of this class
// };

// ostream& operator<<(ostream& cout,demo& obj){  //it is a global function 
//     cout<<"n1 :"<<obj.n1<<endl<<"n2 :"<<obj.n2<<endl<<"n3 :"<<obj.n3;
//     return cout;
// }   

// int main(){
//     demo d1(1,2,3);
//     cout<<d1;
//     return 0;
// }


                        //friend class

class sample1;
class sample2{
    private:
        int n1;
    protected:
        int n2;
    public:
        int n3;
        friend class sample1;
        sample2(int n1,int n2,int n3){
            this->n1=n1;this->n2=n2;this->n3=n3;
        }
        sample2(){};
};

class sample1{
    public:
        void displayData(sample2& obj){
            cout<<obj.n1<<endl<<obj.n2<<endl<<obj.n3;
        }
};

int main(){
    sample2 s1(1,2,3);
    sample1 s2;
    s2.displayData(s1);
    return 0;
}

