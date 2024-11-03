#include<iostream>
using namespace std;

struct node{
    int data,fac;
    node*left,*right;
};

node* l_rotate(node*);

node* createNode(){
    node* new_node = new node;
    cout<<"Enter node value :";
    cin>>new_node->data;
    new_node->left=NULL;
    new_node->right=NULL;
    new_node->fac=0;
    return new_node;
}

node* r_rotate(node* root){
    int lf = root->left->fac;
    if(lf==1){
        root->left = l_rotate(root->left);
    }

    node* ptr=root->left;
    root->left = ptr->right;
    ptr->right=root;

    return ptr;
}

node* check_l(node* root,int& flag){

    if(root->fac==0){
        root->fac=1;
    }
    else if(root->fac==-1){
        root->fac=0;
        root->left->fac=0;
        root = r_rotate(root);
        flag=0;
    }
    else{
        root->fac=0;
        flag=0;
    }

    return root;
}

node* l_rotate(node* root){
    int rf = root->right->fac;

    if(rf==-1){
        root->right = r_rotate(root->right);
    }

    node* ptr=root->right;
    root->right=ptr->left;
    ptr->left=root;

    return ptr;

}


node* check_r(node* root,int& flag){

    if(root->fac==0){
        root->fac=1;
    }
    else if(root->fac==-1){
        root->fac=0;
        flag=0;
    }
    else{
        root->fac=0;
        root->right->fac=0;
        root = l_rotate(root);
        flag=0;
    }

    return root;
}

node* insert(node* root,node* new_node,int flag){
    if(root==NULL)
        return new_node;

    if(root->data>new_node->data){
        root->left = insert(root->left,new_node,flag);
        if(flag){
            root= check_l(root,flag);
        }
    }
    else if(root->data < new_node->data){
        root->right = insert(root->right,new_node,flag);
        if(flag){
            root= check_r(root,flag);
        }
    }
    else{
        cout<<"Duplicate data ";
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

void inorder(node* root){
    if(root==NULL)
        return;
    
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
    
    return;
}

int main(){
    int n;
    cout<<"Enter number of node :";
    cin>>n;

    node* root=NULL;
    for(int c1=0;c1<n;c1++){
        node* new_node=createNode();
        root = insert(root,new_node,1);
    }

    preorder(root);
    cout<<"\n";
    inorder(root);
    return 0;
}