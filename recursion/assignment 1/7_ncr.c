// Given three number n, r  & m, Write a program to calculate nCr % m.

#include<stdio.h>
int factorial(int n){
    if(n==1 || n==0){
        return 1;
    }
    return n*factorial(n-1);
}

int ncr(int n, int r){
    return (factorial(n))/(factorial(n-r) * factorial(r));
}

int main(){
    int n,r;
    printf("Enter n and r : ");
    scanf("%d %d",&n, &r);

    int NCR = ncr(n,r);
    printf("%d",NCR);
}
