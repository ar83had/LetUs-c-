#include<iostream>
#include"graph_header.h"

using namespace std;


int main(){
    int v,e;
    cout<<"Enter numner of vertex and edges :";
    cin>>v>>e;

    Graph g1(v,e);
    g1.createGraph();
    g1.display();

    g1.wershell();
    g1.display_path_matrix();
    return 0;
}