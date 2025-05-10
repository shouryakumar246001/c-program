#include<stdio.h>
int  fac(int n);
int main (){
    printf("the factorial of the digit is %d " ,fac(4));

}
int fac(int n){
    if(n<=0){
        return 1;
    }
    int facnm1=fac(n-1);
    int fact=facnm1*n;
    return fact;
}