#include<iostream>
using namespace std;

class Solution {
public:
    bool isBalanced(string num) {
        int even=0;
        int odd=0;

        int size=0;
        for(int c1=0;c1<size;c1++){
            int cur = num[c1]-'0';
            cout<<c1%2;
            if(c1%2==0){
                even+=cur;
            }
            else
                odd+=cur;
        }

        if(even==odd)
            return true;
        else
            return false;
    }
};

int main(){
    char temp = 49;
    cout<<temp;
    return 0;

}