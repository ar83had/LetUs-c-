#include<iostream>

using namespace std;

int find(string pre,string text){
    int c1;
    for(c1=0;c1<text.size();c1++){
        int c2=-1;
        int c3=c1;
        while(text[c3++]==pre[++c2]);

        if(pre.size()==c2)
            return c1;
    }

    return -1;
}

int main(){
    string pre = "sham";
    string text="arshad shamim";
    cout<<find(pre,text);
    return 0;
}