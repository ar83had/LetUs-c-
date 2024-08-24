#include<iostream>
#include<fstream>

using namespace std;

                        //Read file line by line;
// int main(){
//     ifstream file1("bismila.c++");
//     char ch;
//     while(!file1.eof()){ //alternate file1 or ifstream::clos()
//         file1.get(ch);
//         cout<<ch;
//     }
//     file1.close();
//     return 0;
// }

                    //copy filew

// int main(){
//     char ch;
//     string source,destination;
//     cout<<"Enter source filr name :";
//     cin>>source;
//     cout<<"Destinatio file name :";
//     cin>>destination;
     
//     ifstream sor(source);
//     ofstream des(destination);

//     while(sor)
//         des.put(sor.get());
    
//     sor.close();
//     des.close();

//     return 0;
// }

                        //read line by line

// int main(){
//     string source,destination;
//     char str[100];

//     cout<<"Enter file Name :";
//     cin>>source;
//     cout<<"Enter destinatio file :";
//     cin>>destination;

//     ifstream sor(source);
//     ofstream des(destination);
//     while(sor){
//         sor.getline(str,101,'\n');
//         des<<str<<endl;
//     }

//     sor.close();
//     des.close();
//     return 0;
// }

                            //binary mode;
// int main(){
//     string source;
//     struct employee{
//         string name;
//         int age;
//     };

//     employee e1;
//     cout<<"Enter destination file Name :";
//     cin>>source;

//     ofstream des(source,ios::binary);

//     int ch=0;
//     while(ch<2){
//         cout<<"Enter name and age :";
//         cin>>e1.name>>e1.age;
//         des.write(reinterpret_cast<const char*>(&e1),sizeof(e1));
//         ch++;
//     }

//     des.close();
//     ifstream sor(source,ios::binary);
//     while(sor.read(reinterpret_cast<char*>(&e1),sizeof(e1)))
//     {
//         cout<<e1.name<<e1.age<<endl;
//     }
//     sor.close();
//     return 0;
// }


    // ofstream des("demo.txt");
    // des<<"Hello World";
    // des.seekp(1,ios::end);
    // des<<"Hello today";
    // des.close();

                        //ranadom Access

int main(){
    struct emp{
        string name;
        int age;
    };

    ifstream sor("demo.txt");
    cout<<sor.tellg()<<endl;
    sor.seekg(-10,ios::end);
    cout<<sor.tellg()<<endl;
    char ch;
    while(sor){
        sor.get(ch);
        cout<<ch;
    }
    return 0;
}