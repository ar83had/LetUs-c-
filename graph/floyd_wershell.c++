#include<iostream>
#include<vector>
#include<climits>

using namespace std;

vector<vector<long>>createGraph(){
    int v,e;
    cout<<"Enter Number of vertex :";
    cin>>v>>e;

    vector<long>temp(v,INT_MAX);
    vector<vector<long>>adj(v,temp);

    for(int c1=0;c1<e;c1++){
        int s,d;
        cout<<"Enter Source and Destination vertex :";
        cin>>s>>d;

        cout<<"Enter weight :";
        cin>>adj[s][d];
    }

    return adj;
}

void displayGraph(vector<vector<long>>adj){
    int v=adj.size();
    cout<<"Adjency Matrix"<<endl;
    for(int c1=0;c1<v;c1++){
        for(int c2=0;c2<v;c2++){
            cout<<adj[c1][c2]<<" ";
        }
        cout<<endl;
    }

    return;
}

vector<vector<int>>predecessor(vector<vector<long>>adj){
    int v=adj.size();
    vector<int>temp(v,-1);
    vector<vector<int>>pre(v,temp);

    for(int c1=0;c1<v;c1++){
        for(int c2=0;c2<v;c2++){
            if(adj[c1][c2]!=INT_MAX){
                pre[c1][c2]=c1;
            }
        }
    }

    return pre;
}

void display_pre(vector<vector<int>>pre){
    cout<<"Predecessor matrix "<<endl;
    for(auto row:pre){
        for(auto el:row){
            cout<<el<<" ";
        }
        cout<<endl;
    }

    return;
}

vector<vector<int>>shortest(vector<vector<long>>&adj,vector<vector<int>>pre){
    vector<vector<long>>d=adj;
    int v=adj.size();

    for(int c1=0;c1<v;c1++){
        for(int c2=0;c2<v;c2++){
            for(int c3=0;c3<v;c3++){
                if(d[c2][c1]!=INT_MAX && d[c1][c3]!=INT_MAX && d[c2][c1]+d[c1][c3]<d[c2][c3]){
                    d[c2][c3]=d[c2][c1]+d[c1][c3];
                    pre[c2][c3]=c1;
                }
            }
        }
    }

    return pre;
}

void path(vector<vector<int>>pre,int s,int d){
    if(d==-1)
        return;
    
    path(pre,s,pre[s][d]);

    cout<<"->"<<d;
    return;
}

int main(){
    vector<vector<long>> adj=createGraph();
    vector<vector<int>>pre = predecessor(adj);
    pre=shortest(adj,pre);

    int s,d;
    cout<<"Enter Source and destination :";
    cin>>s>>d;
    cout<<"Shortest path between "<<s<<"and "<<d<<" :";
    path(pre,s,d);
    return 0;
}