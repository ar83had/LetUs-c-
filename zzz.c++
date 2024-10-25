#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>

class Solution {
public:
    static bool bylen(string s1,string s2){
        return(s1.size()>s2.size())?true:false;
    }

    int minExtraChar(string s, vector<string>& dictionary) {
        int size=dictionary.size();
        sort(dictionary.begin(),dictionary.end(),bylen);
        for(auto el:dictionary){
            cout<<" "<<el;
        }
        cout<<endl;

        for(int c1=0;c1<size;c1++){
            string cur=dictionary[c1];
            int flag = s.find(cur);
            if(flag!=-1){
                int st=flag;
                int end = cur.size();
                for(int c1=st;c1<end;c1++){
                    s.replace(c1,c1,0);
                }
            }
            cout<<s<<endl;
        }

        return s.size();
    }
};

int main(){
//     vector<string>dic={"ox","lb","diz","gu","v","ksv","o","nuq","r","txhe","e","wmo","cehy","tskz","ds","kzbu"};

// ;
//     string s="dwmodizxvvbosxxw";
//     Solution s1;
//     int re = s1.minExtraChar(s,dic);
//     cout<<re;

    cout<<abs(-3);
    return 0;
}