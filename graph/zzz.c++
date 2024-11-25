// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>

using namespace std;

int main() {
    // Write C++ code here
    cout << "Try programiz.pro";
    
    vector<char>arr={'a','a','a','b'};
    arr.erase(arr.begin()+0,arr.begin()+0+3);
    cout<<endl;

    for(auto el:arr){
        cout<<el<<flush;
    }


    cout<<endl<<"by"<<endl;
    return 0;
}