#include<iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        char* str=(char*)malloc(sizeof(char)*sizeof(s));
        int c1=0;
        int index=0;
        while(s[c1]!=0){
            char cur = s[c1++];
            if(65<=cur && cur<=90)
                str[index++]=cur+32;
            else if((97<=cur && cur<=122) || (48<=cur && cur<=57))
                str[index++]=cur;
        }

        cout<<str;
        int mid=index/2;
        index--;
        for(int c1=0;c1<mid;c1++){
            if(str[c1] != str[index-c1])
                return false;
        }

        return true;
    }
};

int main(){
    string name = "ab_a"

;
    Solution s1;
    cout<<s1.isPalindrome(name);
    return 0;
}