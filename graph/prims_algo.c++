#include<iostream>
#include<vector>
#include<climits>

using namespace std;

vector<vector<int>>createGraph(int v,int e){
    vector<int>temp(v,INT_MAX);
    vector<vector<int>>adj(v,temp);

    for(int c1=0;c1<e;c1++){
        int s,d;
        cout<<"Enter Source and Destination vertex :";
        cin>>s>>d;
        cout<<"Enter weight of vertex :";
        cin>>adj[s][d];
    }

    return adj;
}

vector<int>prims(vector<vector<int>>adj){
    int v=adj.size();
    vector<int>dis(v,INT_MAX);
    vector<int>pre(v,-1);
    vector<int>status(v,1);

    for(int c1=0;c1<v;c1++){
        for(int c2=0;c2<v;c2++){
            // cout<<adj[c1][c2]<<" "<<dis[c2]<<" "<<(adj[c1][c2]<dis[c2])<<endl;
            if(adj[c1][c2]<dis[c2]){
                dis[c2]=adj[c1][c2];
            }
        }

        status[c1]=0;
        int min=INT_MAX;
        int i;
        for(int c1=0;c1<v;c1++){
            if(status[c1] && dis[c1]<min){
                i=c1;
                min=dis[c1];
            }

        }

        if(min!=INT_MAX)
            pre[i]=c1;

    }

    return pre;

}

int main(){
    vector<vector<int>>adj;
    int v,e;
    cout<<"Enter number of vertex and edges :";
    cin>>v>>e;

    adj=createGraph(v,e);

    vector<int>spanning_tree=prims(adj);
    return 0;
}