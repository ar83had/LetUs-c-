 #include<iostream>
 #include<string>
 #include<vector>
 #include<stack>
 #include<unordered_set>
 #include<unordered_map>
 #include<cmath>
 #include<algorithm>

using namespace std;

class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int div=1;
        int sum;
        do{
            sum=0;
            for(int c1=0;c1<nums.size();c1++){
                sum+=ceil((float)nums[c1]/div);
            }
            div++;
            cout<<div<<" "<<sum<<endl;
        }while(threshold<sum);

        return div;
    }
};

int main()
{ 
    // vector<int>arr={44};
    // Solution s1;
    // // cout<<s1.smallestDivisor(arr,5);
    // // cout<<arr[1];
    // vector<int>arr2(arr.begin(),arr.begin()+(arr.size()/2)+1);
    // for(auto el:arr2)
    //     cout<<el;

    int arr[3]={1,2,3};
    cout<<sizeof(arr)/sizeof(arr[0]);
    return 0;
}