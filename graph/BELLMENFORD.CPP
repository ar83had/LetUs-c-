#include<iostream>
#include<vector>
#include<queue>
#include<climits>

using namespace std;

vector<vector<int>>createGraph(){
    int v,e;
    cout<<"Enter Number of vertex :";
    cin>>v>>e;

    vector<int>temp(v,0);
    vector<vector<int>>adj(v,temp);

    for(int c1=0;c1<e;c1++){
        int s,d;
        cout<<"Enter Source and Destination vertex :";
        cin>>s>>d;

        cout<<"Enter weight :";
        cin>>adj[s][d];
    }

    return adj;
}

void displayGraph(vector<vector<int>>adj){
    int v=adj.size();
    for(int c1=0;c1<v;c1++){
        for(int c2=0;c2<v;c2++){
            if(adj[c1][c2]){
                cout<<endl<<"V("<<c1<<")---->v("<<c2<<")";
            }
        }
    }

    return;
}

vector<int>BellmenFord(vector<vector<int>>adj,int s){
    queue<int>q;
    int v=adj.size();
    vector<int>pre(v,-1);
    vector<int>dis(v,INT_MAX);
    q.push(s);

    pre[0]=-1;dis[0]=0;
    while(!q.empty()){
        int cur=q.front();
        q.pop();

        for(int c1=0;c1<v;c1++){
            if(adj[cur][c1] && dis[cur]+adj[s][c1]<dis[c1]){
                dis[c1]=adj[s][c1]+dis[s];
                q.push(c1);
                pre[c1]=cur;
            }
        }
    }


    return pre;
}

void path(vector<int>pre,int d){
    if(d==-1)
        return;
    
    path(pre,pre[d]);
    
    cout<<"-->"<<d;
}

int main(){
    vector<vector<int>> adj=createGraph();

    int s=0;
    vector<int>pre=BellmenFord(adj,s);

    for(auto el:pre){
        cout<<el<<" ";
    }

    int d;
    cout<<"Enter Distination Vertex :";
    cin>>d;

    cout<<"shortest path between "<<s<<" and "<<d<<endl;    
    path(pre,d);

    return 0;
}