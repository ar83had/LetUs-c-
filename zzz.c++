#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    void swap(int& a,int& b){
        int temp=a;
        a=b;
        b=temp;
        return;
    }
    int setPovit(vector<int>&arr){

        //first pick a good povit
        int size=arr.size();
        if(arr[0]>arr[size/2]){
            swap(arr[0],arr[size/2]);
        }
        if(arr[0]>arr[size-1]){
            swap(arr[0],arr[size-1]);
        }
        if(arr[size/2]>arr[size-1]){
            swap(arr[size/2],arr[size-1]);
        }
        swap(arr[0],arr[size/2]);

        if(arr.size()==1)
            return 0;
        
        int st=1;
        int end=size-1;

        while(st<=end){
            int cur=arr[0];

            while(cur>arr[st])
              st++;
            
            while(cur<arr[end])
                end--;
            
            if(st<end){
                swap(arr[st],arr[end]);
                st++;
                end--;
            }
            else
                st++;
        }

        swap(arr[0],arr[end]);
        return end;;
    }

    int findKthLargest(vector<int>& nums, int k) {
        int pi = setPovit(nums);

        int ans;
        int size=nums.size();
        vector<int>temp;
        if(pi==size-k)
            ans=nums[pi];
        else if(pi>size-k){
            temp.insert(temp.begin(),nums.begin(),nums.begin()+pi);
            ans=findKthLargest(temp,k-(size-pi));
        }
        else{
            temp.insert(temp.begin(),nums.begin()+pi+1,nums.end());
            ans=findKthLargest(temp,k);
        }

        return ans;
    }
};

int main(){
    Solution s1;
    vector<int>arr={3,2,1,5,6,4};
    cout<<s1.findKthLargest(arr,2);
    return 0;
}