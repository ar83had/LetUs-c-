#include<stdio.h>

int climbStairs(int n) {
    int count=0;
        if(n==1)
            return 1;
        else if(n==0)
            return 0;
        else if(n==2)
            return 2;

    count+=climbStairs(n-1);
    count+=climbStairs(n-2);

    return count;
}

int main(){

    printf("%d",climbStairs(100));
    return 0;
}