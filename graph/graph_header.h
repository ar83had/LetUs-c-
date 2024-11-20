#include<iostream>
#include<vector>
using namespace std;

class Graph{
    int v,e;
    vector<vector<int>>adj;
    int size;
    vector<vector<int>>path_m;
    public:
    Graph(){};

    Graph(int v,int e){
        this->v=v;
        this->e=e;
    }

    void createGraph(){
        vector<int>linear(v,0);
        vector<vector<int>>matrix(v,linear);

        for(int c1=0;c1<e;c1++){
            cout<<"Enter source and destination vector of "<<c1+1<<" edge :";
            int  s,d;
            cin>>s>>d;
            matrix[s][d]=1;
        }

        adj=matrix;
        size=v;
        return;
    }

    void display(){
        for(int c1=0;c1<size;c1++){
            for(int c2=0;c2<size;c2++){
                if(adj[c1][c2])
                    cout<<"V("<<c1<<")"<<"------->V("<<c2<<")"<<endl;
            }
        }

        return;
    }

    vector<vector<int>> multiply(vector<vector<int>>m1,vector<vector<int>>m2){
        vector<int>linear(v,0);
        vector<vector<int>>result(v,linear);

        for(int c1=0;c1<v;c1++){
            for(int c2=0;c2<v;c2++){
                int sum=0;
                for(int c3=0;c3<v;c3++){
                    sum+=m1[c1][c3]*m2[c3][c2];
                }
                result[c1][c2]=sum;
            }
        }

        return result;
    }

    vector<vector<int>>add(vector<vector<int>>m1,vector<vector<int>>m2){
        vector<int>linear(v,0);
        vector<vector<int>>matrix(v,linear);

        for(int c1=0;c1<v;c1++){
            for(int c2=0;c2<v;c2++){
                matrix[c1][c2]=m1[c1][c2]+m2[c1][c2];
            }
        }

        return matrix;
    }

    void path_matrix(){
        vector<vector<int>>temp=adj;
        path_m=adj;
        for(int c1=0;c1<v-1;c1++){
            temp=multiply(temp,adj);
            path_m=add(path_m,temp);
        }

        
        for(int c1=0;c1<v;c1++){
            for(int c2=0;c2<v;c2++){
                if(path_m[c1][c2])
                    path_m[c1][c2]=1;
            }
        }

        return;
    }

    void display_path_matrix(){
        for(int c1=0;c1<v;c1++){
            for(int c2=0;c2<v;c2++){
                cout<<path_m[c1][c2];
            }
            cout<<endl;
        }
    }

    void wershell(){
        vector<vector<int>>result=adj;
        for(int c1=0;c1<v-1;c1++){
            for(int c2=0;c2<v;c2++){
                for(int c3=0;c3<v;c3++){
                    int cur=result[c2][c3];
                    if(!cur && adj[c2][c1] && adj[c1][c3]){
                        result[c2][c3]=1;
                    }
                }
            }
        }
        path_m=result;
    }

};
