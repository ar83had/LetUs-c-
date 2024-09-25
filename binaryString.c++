#include<iostream>
using namespace std;
#include<vector>

void fn(vector<char>& str,int n,int k,int size){
    if(n<0)
    {
        for(int c1=0;c1<size;c1++){
            cout<<str[c1];
        }
        cout<<endl;
        return;
    }

    for(int c1=0;c1<=k;c1++){
        int in = c1+'0';
        str[n-1]=c1+'0';
        fn(str,n-1,k,size);
    }

    return;
}

int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    int k;
    cout<<"Enter k :";
    cin>>k;

    vector<char>str(n);
    fn(str,n,k,n);
    return 0;
}