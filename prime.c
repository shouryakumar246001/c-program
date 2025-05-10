#include<stdio.h>
int main ()
{
   int isprime=1;
    int i ,n ;
    printf("enter bthe number");
    scanf("%d" ,&n);
if(n<=0){
    isprime=0;

}
else{
    for(i=2;i<n;i++){
    if (n%2==0){
        isprime=0;
        break;
    }
}

}
if(isprime){
    printf("the number is prime %d" ,n);

}
else{
    printf("the number is not prime");
}
}