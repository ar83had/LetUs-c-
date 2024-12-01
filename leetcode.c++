#include<iostream>
#include<vector>
#include<queue>
#include<climits>

using namespace std;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        queue<int>q1;
        int z=0;
        int max=INT_MIN;

        for(int c1=0;c1<nums.size();c1++){
            int cur=nums[c1];

            if(cur==1 || z<k){
                if(cur==0)
                    z++;
                q1.push(cur);
                cout<<max<<" "<<q1.size()<<" "<<(max<q1.size())<<" "<<c1<<endl;
                if(q1.size()>max){
                    max=q1.size();
                }
            }
            else if(q1.front()==0){
                q1.pop();
                q1.push(cur);
            }
            else{
                if(q1.size()>max)
                    max=q1.size();
                
                while(q1.front()!=0){
                    q1.pop();
                }
                q1.pop();

                q1.push(cur);
            }

        }

        return max;
    }
};

int main(){
    int max=INT_MIN;
    queue<int>q1;
    q1.push(1);
    vector<int>arr={1,1,1,0,0,0,1,1,1,1,0};
    cout<<max<<" "<<q1.size()<<" "<<(max<1)<<" "<<endl;
    // Solution s1;
    // s1.longestOnes(arr,2);
    return 0;
}