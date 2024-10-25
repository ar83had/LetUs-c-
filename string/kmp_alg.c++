#include<iostream>
#include<vector>
using namespace std;

vector<int>prefix_table(const string& p){
    vector<int>table;
    int c1=1;int c2=0;
    table.push_back(0);
    while(c1<p.size()){
        if(p[c1]==p[c2]){
            c2++;
            table.push_back(c2);
        }
        else if(c2>0){
            c2=table[c2-1];
            c1--;
        }
        else{
            table.push_back(0);
            c2=0;
        }
        c1++;
    }

    return table;
}


int search(string p,string t,vector<int>table){
    int c1=0;int c2=0;

    int result=0;
    while(c1<t.size()){

        if(c2==p.size()){
            result++;
            c2=0;
        }

        if(t[c1]==p[c2]){
            c2++;
        }
        else if(c2>0){
            c2=table[c2-1];
            continue;
        }
        c1++;
    }
        
    return result;
}

int main(){
    string p;
    string t;

    // cout<<"enter text :";
    // cin>>t;
    cout<<"enter pattern :";
    cin>>p;
    
    vector<int>table = prefix_table(p);

    for(auto el:table)
        cout<<el<<" ";

    // int index= search(p,t,table);

    // cout<<index;


    return 0;
}