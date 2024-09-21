#include<iostream>
using namespace std;

ostream& tab(ostream& cout){
    cout<<'\t';
    return cout;
};

class book{
    private:
    string name;
    int price;
    string author;
    public:
        void setBook(string name,int price,string author){
            this->name=name;
            this->price=price;
            this->author=author;
        }
        
        void displayData(){
            cout<<name<<tab<<price<<tab<<author;
        }
};

//there student has book;
class student{
    private:
    string name;
    string rollNo;
    book b1;
    public:
        void setStudent(string stName,string roll,string bookName,int price,string author){
            this->name=stName;
            this->rollNo=roll;
            this->b1.setBook(bookName,price,author);
        }
        void displayStudent(){
            cout<<name<<tab<<rollNo<<tab;
            b1.displayData();
        }
};

int main(){
    student s1;
    s1.setStudent("arshad","20","let us c++",350,"yesvent kanatkar");
    s1.displayStudent();
    return 0;
}