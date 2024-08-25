#include<iostream>
#include<string>
#include<fstream>

using namespace std;

class student{
    private:
    string name;
    int age;
    int roll;
    public:
    student(){};
    student(char* &name,int& age,int& roll){
        this->name =name;
        this->age=age;
        this->roll=roll;
    }

            //get data into student object;
    friend istream& operator>>(istream &cin,student& object){ //it is memeber of class that why it take two argument
        cout<<"Enter name :";
        cin>>object.name;
        cout<<"Enter age :";
        cin>>object.age;
        cout<<"Enter roll number :";
        cin>>object.roll;
        return cin;
    };

                //print object on display;
    friend ostream& operator<<(ostream& cout,student& object){
        cout<<"Name :"<<object.name<<endl<<"Age :"<<object.age<<endl
        <<"roll number :"<<object.roll;

        return cout;
    }

                //write object into file;
    friend ofstream& operator<<(ofstream& file,student& object){
        file<<"Name :"<<object.name<<endl<<"Age :"<<object.age<<endl<<"Roll No :"<<object.roll<<endl;
        return file;
    }
};


int main(){
    ofstream des("object_file.txt");
    student s1,s2;
    cin>>s1>>s2;
    cout<<s1<<s2;
    des<<s1<<s2;
    return 0;
}