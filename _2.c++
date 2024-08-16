#include<iostream>
using namespace std;

class Pattern{
    private:
        int r=0,c=0;
        char* patArr = new char[r];
    public:
        void getDim(){
            cout<<"enter Dimension of patterrn :";
            cin>>r>>c;
            return;
        };

        void getPatteren(){
            if(!(r&&c)){
                getDim();
            }
            cout<<"enter rowise charcter of pattern :";
            for(int c1=0;c1<r;c1++)
                cin>>patArr[c1];
        };

        void displayDim(){
            cout<<r<<c;
        };

        void displayPattern(){
            for(int c1=0;c1<r;c1++)
                cout<<patArr[c1]<<" ";
        }

        void print(){
            for(int c1=0;c1<r;c1++)
            {
                for(int c2=0;c2<c;c2++)
                {
                    cout<<patArr[c1];
                }
                cout<<endl;
            }
        }
};

int main(){
    Pattern p1;
    p1.getPatteren();
    p1.print();
    return 0;
}