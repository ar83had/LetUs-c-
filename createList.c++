#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

class List{
    private:
        node* head=NULL;
    public:
        node* createNode(int c1){
            node* newnode= new node();
            newnode->data=c1;
            newnode->next=NULL;
            return newnode;
        }
        void insertNode(int c1){
            node* newnode = createNode(c1);
            if(head==NULL)
            {
                head=newnode;
                return;
            }

            node* ptr = head;
            while(ptr->next!=NULL){
                ptr=ptr->next;
            }

            ptr->next=newnode;
        }
        void display(){
            node* ptr=head;
            cout<<endl;
            while(ptr!=NULL){
                cout<<"-->"<<ptr->data;
                ptr=ptr->next;
            }
        }
        void deleteAt(int p){
            if(p==1)
            {
                node* temp=head;
                head=head->next;
                delete temp;
                return;
            }

            int c1=2;
            node* ptr=head;
            while(c1++<p){
                ptr=ptr->next;
            }

            ptr->next=ptr->next->next;
            return;
        }
};

int main(){
    int n;
    cout<<"Enter number of nodes :";
    cin>>n;

    List l1;
    for(int c1=0;c1<n;c1++){
        l1.insertNode(c1);
    }

    l1.display();
    l1.deleteAt(3);
    l1.display();
    return 0;
}