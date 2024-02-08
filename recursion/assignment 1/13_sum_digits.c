// Given a number, calculate the sum of its digits.
#include<stdio.h>
int sum(int n){
    if(n<=9) return (n);
    return (n%10) + sum(n/10);
}

int main(){
    int n;
    printf("Enter n ");
    scanf("%d",&n);
    int ans = sum(n);
    printf("%d",ans);

    return 0;
}