#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(int a,int b){
    return (a%10)<(b%10);
}

int main(){
    vector<int> arr={100000,347,4574,5685};
    sort(arr.begin(),arr.end(),compare);
    for(auto& el:arr){
        cout<<" "<<el;
    }
    return 0;
}