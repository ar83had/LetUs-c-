#include<iostream>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if(n==0||n==1)
            return 1;

        int count = climbStairs(n-1);
        if(n>=2)
            count+=climbStairs(n-2);

        return count;
    }
};

int main(){
    Solution s1;
    cout<<s1.climbStairs(45);
    return 0;
}