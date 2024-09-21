#include<iostream>
using namespace std;

class String{
    private:
        char* str;
        int len;
    public:
        String(){len=0;str=NULL;};
        String(const char* arr){
            int c1=0;
            while(arr[c1++]!=0);
            str = new char[c1];
            c1=0;
            while(arr[c1]!=0){
                str[c1]=arr[c1];
                c1++;
            }
            str[c1++]=0;
            len=c1;
        };
        int size(){
            return len;
        }
        void display(){
            cout<<endl<<str;
        }
        String operator+(const String& second) const {
            String temp;
            temp.len = len + second.len - 1;
            temp.str = new char[temp.len];
            int i = 0;
            for (; i < len - 1; ++i) {
                temp.str[i] = str[i];
            }
            for (int j = 0; j < second.len; ++j, ++i) {
                temp.str[i] = second.str[j];
            }
            return temp;
        }
        void operator=(String operand){
            str = new char[operand.size()];
            char* temp = operand.str;
            
            int c1=0;
            while(temp[c1]!=0){
                str[c1]=temp[c1];
                c1++;
            }

            str[c1++]=0;
            return;
        }

        void operator=(const char* string){
            int c1=0;
            while(string[c1++]!=0);
            str = new char[c1];
            str[c1--]=0;
            while(c1>=0){
                str[c1]=string[c1];
                c1--;
            }
            return;
        }

        void toLower(){
            int c1=0;
            while(str[c1]!=0){
                if(65<=str[c1]<=90)
                    str[c1]=str[c1]+32;
                c1++;
            }

            return;
        }

        void toUpper(){
            int c1=0;
            while(str[c1]!=0){
                char ch = str[c1];
                if(97<=ch<=122)
                    str[c1]=ch-32;
                c1++;
            }

            return;
        }
};

int main(){
    String name="arshad";
    name.display();
    String sirName="SHAMIM";
    sirName.toLower();
    sirName.display();
    sirName.toUpper();
    String full = name+sirName;
    full.display();
    String name2;
    name2=name;
    name2.display();
    String name3;
    name3="irshad";
    name3.display();
    return 0;
}