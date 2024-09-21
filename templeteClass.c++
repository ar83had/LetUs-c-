#include<iostream>
using namespace std;

// template<class T>
// class Stack{
//     private:
//         struct node{
//             T data;
//             node* next;
//         }*ptr;
//         node* end;
//         node* start=NULL;
//     public:
//         Stack(){this->start=NULL;};
//         void push(T el);
//         T pop();
//         template<class U>   //just create a template function;
//         friend ostream& operator<<(ostream& cout,Stack<U>& obj);
// };

// template<class T>
// void Stack<T>::push(T el){
//     ptr = new node;
//     ptr->data = el;ptr->next=NULL;
//     if(start==NULL)
//         start=ptr;
//     else
//         end->next=ptr;
//     end=ptr;
//     return;
// }

// template<class T>
// T Stack<T>::pop(){
//     node* temp = start;
//     node* temp2;
//     while(temp->next->next!=NULL)
//         temp = temp->next;
    
//     temp2=temp->next;
//     temp->next=NULL;
//     return temp2->data;
// }

// template<class T>
// ostream& operator<<(ostream& cout,Stack<T>& obj){
//     while(obj.start != NULL)
//     {
//         cout<<"->"<<obj.start->data;
//         obj.start = obj.start->next;
//     }
//     return cout;
// };

// int main(){
//     Stack<int>s1;
//     s1.push(1);
//     s1.push(2);
//     s1.push(24);
//     s1.push(46);
//     cout<<"pop ="<<s1.pop()<<endl;
//     cout<<s1;
//     return 0;
// }