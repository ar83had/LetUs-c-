//there we are reverse kth element from a queue;
//by useing a stack(push k element in it ) and queue(by push n-1-k element in it);

#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void reversek(queue<int>&q,int n){
    if(n<0)
    {
        cout<<"n cant be zero";
        return;
    }
    else if(n>q.size()){
        cout<<"n cant be greater than queue size";
        return;
    }

    stack<int>s;
    queue<int>q2;
    for(int c1=0;c1<n;c1++){
        s.push(q.front());
        q.pop();
    }
    while(!q.empty()){
        q2.push(q.front());
        q.pop();
    }

    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    while(!q2.empty()){
        q.push(q2.front());
        q2.pop();
    }

    return;
}

int main(){
    queue<int>q;
    for(int c1=0;c1<10;c1++){
        q.push(c1);
    }

    int n;
    cout<<"Enter value of n :";
    cin>>n;
    reversek(q,n);

    int size=q.size();
    int c1=0;
    while(c1<size){
        int temp=q.front();
        cout<<temp;
        q.pop();
        q.push(temp);
        c1++;
    }
    return 0;
}