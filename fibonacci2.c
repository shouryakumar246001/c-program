#include<stdio.h>
int fib(int n);
int main (){
    int n , i;
printf("enter the number to which to print the fibnacci series " );
scanf("%d" ,&n);
for(i=0;i<=n;i++){
printf("%d" ,fib(i));
}}
int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int fibnm1=fib(n-1);
    int fibnm2=fib(n-2);
   int fibn=fibnm1+fibnm2;
    return fibn;
}