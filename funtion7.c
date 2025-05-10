#include<stdio.h>
int fib(int n);

int main (){
printf("%d " ,fib(6));
    return 0;
}
int fib(int n){
int fibNm1;
int fibNm2;

    if (n==0){
        return 0;
    }
    if (n==0){
        return 0;
    }
    fibNm1=fib(n-1);
    fibNm2=fib(n-2);
    int faab=fibNm1+fibNm2;
    return faab;
}