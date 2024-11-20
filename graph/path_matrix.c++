#include<iostream>
#include<vector>
#include"graph_header.h"
using namespace std;

int main(){
    Graph g1(3,2);
    g1.createGraph();
    g1.display();

    g1.path_matrix();
    g1.display_path_matrix();
    return 0;
}


