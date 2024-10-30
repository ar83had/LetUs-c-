#include<iostream>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
};

node* createnode(int data){
    node* temp = new node;
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;

    return temp;
}

node* insert(node* root,node* new_node){
    if(root==NULL){
        return new_node;
    }

    if(root->data>new_node->data)
        root->left = insert(root->left,new_node);
    else if(root->data<new_node->data)
        root->right=insert(root->right,new_node);
    else{
        cout<<"duplicat element is not allow !";
    }

    return root;
}

void preorder(node* root){
    if(root==NULL)
        return;
    
    cout<<root->data;
    preorder(root->left);
    preorder(root->right);
    return;
}

int main(){
    int n;
    cout<<"enter number of nodes :";
    cin>>n;
    node* root=NULL;
    for(int c1=0;c1<n;c1++){
        int data;
        cout<<"enter "<<c1+1<<"node data :";
        cin>>data;
        node* new_node = createnode(data);
        root = insert(root,new_node);
    }

    preorder(root);
    return 0;
}