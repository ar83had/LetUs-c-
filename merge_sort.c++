#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>&arr,int l1,int u1,int l2,int u2,vector<int>&temp){
    int index=0;
    while(l1<=u1 && l2<=u2){
        if(arr[l1]<arr[l2])
        {
            temp.push_back(arr[l1]);
            l1++;
        }
        else{
            temp.push_back(arr[l2]);
            l2++;
        }
    }

    if(l1>u1){
        while(l2<=u2){
            temp.push_back(arr[l2++]);
        }
    }
    else if(l2>u2){
        while(l1<=u1){
            temp.push_back(arr[l1++]);
        }
    }

    return;
}

void copy(vector<int>&sor,vector<int>&des,int lo,int up){
    int index=0;
    while(lo<=up){
        des[lo]=sor[index++];
        lo++;
    }
    return;
}

void sort(vector<int>&arr,int lo,int up){
    if(lo>=up)
        return;
    int mid = (lo+up)/2;
    sort(arr,lo,mid);
    sort(arr,mid+1,up);
    vector<int>temp;
    merge(arr,lo,mid,mid+1,up,temp);
    copy(temp,arr,lo,up);

    return;
}

int main(){
    vector<int>arr={1,3,43,34,35,45,66};
    vector<int>temp;
    sort(arr,0,arr.size()-1);
    for(auto el:arr){
        cout<<" "<<el;
    }

    return 0;
}