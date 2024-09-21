#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>arr;
        int size=strs.size();
        int arr2[size];
        int c1=0;
        while(c1<size){
            string cur=strs[c1];
            int c2=0;
            int sum=0;
            while(cur[c2]!=0){
                sum+=cur[c2++];
            }
            arr2[c1++]=sum;
        }


        int index=0;int index2=0;
        size=c1;
        c1=0;
        while(c1<size){
            int cur=arr2[c1];
            if(cur==0)
                continue;
            arr[index][index2++]=strs[c1];
            int c2=c1+1;
            while(c2<size){
                if(arr2[c2]==0)continue;
                else if(arr2[c2]==cur)
                {
                    arr[index][index2++]=strs[c2];
                    arr2[c2]=0;
                }
            }
            index++;
            c1++;
        }

        return arr;
    }
};

int main(){

    vector<string>arr={"arshad","shamim","ate","eta"};
    Solution s1;
    vector<vector<string>> arr1 = s1.groupAnagrams(arr);
    for(auto el:arr1){
        for(auto el2:el){
            cout<<el2;
        }
    }
    return 0;
}