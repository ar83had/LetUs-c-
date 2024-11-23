#include<iostream>
#include"graph_header.h"
#include<stack>

using namespace std;

//                              non-recursive method;

// void traversal(const vector<vector<int>>& adj,vector<int>& state,int st,int& v){
//     stack<int>stk;
//     stk.push(st);

//     while(!stk.empty()){
//         int cur = stk.top();
//         stk.pop();
//         if(!state[cur]){
//             cout<<cur;
//             state[cur]=1;
//             v--;
//         }

//         for(int c1=0;c1<v;c1++){
//             if(adj[cur][c1])
//                 stk.push(adj[cur][c1]);
//         }
//     }

//     return;
// }

// void dfs(const vector<vector<int>>& adj){
//     int v=adj.size();
//     vector<int>state(v,0);

//     while(v>0){
//         traversal(adj,state,v-1,v);
//     }

//     return;
// }

void traversal(const vector<vector<int>>& adj,vector<int>& state,int& v,int st,vector<vector<int>>& matrix,int& time){

    if(!state[st]){
        cout<<st;
        matrix[st].push_back(time++);
        state[st]=1;
    }

    for(int c1=0;c1<state.size();c1++){
        if(adj[st][c1] && !state[c1]){
            traversal(adj,state,v,c1,matrix,time);
        }
    }

    matrix[st].push_back(time++);
    v--;

    return;
}


void dfs(vector<vector<int>> adj){

    int v=adj.size();
    vector<int>state(v,0);
    vector<vector<int>>matrix(v);
    int temp=1;

    while(v>0){
        cout<<v-1;
        traversal(adj,state,v,v-1,matrix,temp);
    }

    cout<<endl;             //may be this not work;
    for(auto el:matrix){
        for(auto el2:el){
            cout<<el2<<" ";
        }
        cout<<endl;
    }

    return;
}

int main(){
    int v,e;
    cout<<"Enter number of vertex and edges :";
    cin>>v>>e;

    Graph g1(v,e);
    g1.createGraph();
    vector<vector<int>>adj=g1.adj;

    dfs(adj);
    return 0;
}