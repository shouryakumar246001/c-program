#include<stdio.h>
void swap(int a , int b);
void _swap(int *a,int *b);
int main(){
int x=9, y=8;
_swap(&x,&y);
printf("%d %d " , x ,y);

return 0;
}
void _swap(int*a , int*b){
    int t=*a;
    *a=*b;
    *b=t;
}
