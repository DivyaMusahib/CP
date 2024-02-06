// Given a number N, write a program to print numbers from 1…N.
#include<stdio.h>
int print(int a, int n){
printf("%d\n",a);
a++;
if(a!=n){
    return print(a, n);
}

}
int main(){
    int n;
    printf("Enter :");
    scanf("%d",&n);
    int num = print(1,n);
    printf("%d",num);
    return 0;
}