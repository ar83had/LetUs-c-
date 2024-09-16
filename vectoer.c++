#include<iostream>
#include<vector>
using namespace std;

                    //perform input and output operation;
// class Person{
//     private:
//         string name;
//     public:
//         Person(){};
//         Person(string name){
//             this->name=name;
//         }
//         friend ostream& operator<<(ostream& cout,Person& obj);
// };

// ostream& operator<<(ostream& cout,Person& obj){
//     cout<<obj.name;
//     return cout;
// };

// int main(){
//     vector<int>arr1;
//     vector<Person>arr2;

//     for(int c1=0;c1<3;c1++){        //method to get elemet in vector;
//         int num;
//         string name;
//         cout<<"Enter number :";
//         cin>>num;
//         cout<<"Enter name :";
//         cin>>name;
//         arr1.push_back(num);
//         arr2.push_back(name);
//     }

//     for(auto c1=arr1.begin();c1!=arr1.end();c1++){    //these two mwthod for iterating ver vector;
//         cout<<*c1;
//     }
//     cout<<endl;
//     for(auto c1:arr1){
//         cout<<c1;
//     }
//     cout<<endl;
//     vector<Person>::iterator itr1=arr2.begin();
//     vector<int>::iterator itr2=arr1.begin();
//     while(itr1!=arr2.end() || itr2!=arr1.end()){
//         if(itr1!=arr2.end())
//             cout<<*itr1;
//         if(itr2!=arr1.end())
//             cout<<*itr2;
//         itr1++;itr2++;
//     }

//     return 0;
// }


int main(){
    vector<int>arr1;

                            //insert at the end;
    for(int c1=0;c1<3;c1++)   
    {
        int num;
        cout<<"Enter number :";
        cin>>num;
        arr1.push_back(num);
    }
                        //access element;
    cout<<"front :"<<arr1.front()<<endl;
    cout<<"Random access (at second index):"<<arr1.at(1)<<endl;
    cout<<"rare :"<<arr1.back()<<endl;

                    //replace element;
    vector<int>::iterator itr1=arr1.begin();
    *itr1=0;
    cout<<"after upadte 0 index :"<<arr1.front()<<endl;
    arr1[1]=1;
    cout<<"after modification 1 index :"<<arr1.at(1)<<endl;
    itr1+=2;
    *itr1=2;
    cout<<"after modification 2 index :"<<arr1.back()<<endl;

                        //insert element at specific position;
    vector<int>::iterator i2;
    i2=arr1.begin();
    i2+=1;
    arr1.insert(i2,2);
    i2--;
    cout<<"Before Insertion{0,1,2} and after insertion at 1 index :";
    for(;i2!=arr1.end();i2++){
        cout<<*i2;
    }
    cout<<endl;
                        //erase an element;
    i2=arr1.begin();
    arr1.erase(++i2);
    i2--;
    cout<<"Before Insertion{0,2,1,2} and after 1 index deletion :";
    for(;i2!=arr1.end();i2++){
        cout<<*i2;
    }

                    //delete last element;
    arr1.pop_back();
    i2=arr1.begin();
    cout<<endl<<"after delete last element :";
    for(;i2!=arr1.end();i2++){
        cout<<*i2;
    }

                    //check size,max size and capacity;
    cout<<"Size :"<<endl<<arr1.size()<<endl;
    cout<<"max size :"<<arr1.max_size()<<endl;
    cout<<"capacity (it number of element that can store without reallocation):"<<arr1.capacity()<<endl;
    arr1.resize(6);
    cout<<"after resize capacity :"<<arr1.capacity();

    cout<<endl<<"is Empty :"<<arr1.empty();
    arr1.clear();
    cout<<endl<<"after delete all element size :"<<arr1.size();
    return 0;
}