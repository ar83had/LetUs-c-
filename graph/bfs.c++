#include<iostream>
#include"graph_header.h"
#include<queue>

using namespace std;

bool all_visited(const vector<int>& state){
    for(auto el : state){
        if(el!=1)
            return false;
    }

    return true;
}

void traverse(const vector<vector<int>>& adj,vector<int>& state,int st){
    queue<int> qu;
    qu.push(st);
    int v = adj.size();
    while(!qu.empty()){
        int cur = qu.front();
        qu.pop();
        cout<<cur;
        state[cur]=1;

        for(int c1=0;c1<v;c1++){
            if(adj[c1][cur] && state[c1]==-1){
                qu.push(c1);
                state[c1]=0;
            }
        }
    }

    return;
}

void bfs(const vector<vector<int>>&adj){
    int v = adj.size();
    vector<int>state(v,-1);

    int st=0;
    while(!all_visited(state)){
        traverse(adj,state,st);
        st++;
    }

    return;
}

int main(){
    int v,e;
    cout<<"Enter Number of vertex and edges :";
    cin>>v>>e;

    Graph g1(v,e);
    g1.createGraph();
    g1.display();
    vector<vector<int>>adj = g1.adj;

    bfs(adj);
    return 0;
}

