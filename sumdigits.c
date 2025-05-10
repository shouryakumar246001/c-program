#include<stdio.h>
int main (){
    int temp , number , digit, sum=0;
    printf("enter the number ");
    scanf("%d",&number);
    temp=number;
    while(number!=0){
    digit=temp%10;
    sum=digit+sum;
    temp=temp/10;}
    printf("the sum of the digits is %d" ,sum);
}