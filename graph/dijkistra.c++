//form single source and non negative weight graph;

#include<iostream>
#include<vector>
#include <climits>

using namespace std;

vector<vector<int>>createGraph(){
    int v,e;
    cout<<"Enter number of vector and edges :";
    cin>>v>>e;

    vector<int>arr(v,0);
    vector<vector<int>>matrix(v,arr);

    for(int c1=0;c1<e;c1++){
        int s,d;
        cout<<"Enter source and destination vertex :";
        cin>>s>>d;
        cout<<"Enter Weight of edge :";
        cin>>matrix[s][d];
    }

    return matrix;
}

vector<int>shortPath(vector<vector<int>> adj,int s){
    int v=adj.size();
    vector<int>dis(v,INT_MAX);
    vector<int>pre(v,-1);
    vector<int>status(v,1);

    dis[s]=0;pre[s]=-1;
    for(int c1=0;c1<v && s!=INT_MIN;c1++){

        for(int c2=0;c2<v;c2++){
            if(adj[s][c2]){
                if(dis[s]+adj[s][c2]<dis[c2]){
                    dis[c2]=dis[s]+adj[s][c2];
                    pre[c2]=s;
                }
            }
        }

        status[s]=0;

        int min=INT_MAX;
        for(int c2=0;c2<v;c2++){
            if(status[c2] && min>dis[c2]){
                s=c2;
                min=dis[c2];
            }
        }
    }

    return pre;
}

void displayPath(vector<int>pre ,int d){
    if(d==-1)
        return;
    
    displayPath(pre,pre[d]);

    cout<<"->"<<d;
    return;
}


int main(){
    
    vector<vector<int>> adj=createGraph();

    int s;
    cout<<"Enter Source Vertex :";
    cin>>s;
    vector<int>pre = shortPath(adj,s);

    int d;
    cout<<"Enter Destination vertex :";
    cin>>d;
    cout<<"Shortest path v("<<s<<")"<<endl;
    displayPath(pre,d);
    cout<<endl<<"-->V("<<d<<")";
    
    return 0;
}