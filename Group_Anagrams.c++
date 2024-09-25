#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>arr;
        int size=strs.size();
        for(int c1=0;c1<size;c1++){
            string cur=strs[c1];
            sort(&cur[0],&cur[cur.size()-1]);
        }

        vector<int>flag(size,1);
        for(int c1=0;c1<size;c1++){
            if(!flag[c1])
                continue;
            
            string cur=strs[c1];
            flag[c1]=0;
            vector<string>temp;
            temp.push_back(cur);
            for(int c2=c1+1;c2<size;c2++){
                if(!flag[c2])
                    continue;
                else if(strs[c2]==cur){
                    temp.push_back(strs[c2]);
                    flag[c2]=0;
                }
                c2++;
            }

            arr.push_back(temp);
        }

        return arr;
    }
};


int main(){
    vector<string>arr={"ate","eat","mom","mon",""," ","duh","ill"};
    Solution s1;
    vector<vector<string>>temp=s1.groupAnagrams(arr);
    for(auto el:temp){
        for(auto el2:el){
            cout<<el2;
        }
        cout<<endl;
    }
    return 0;
}