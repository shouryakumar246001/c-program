#include<stdio.h>
float percentage(int physics , int maths, int sanskrit);
int main(){
    
int science =33;
int maths =66;
int sanskrit=55;
printf("percentage is %d" , percentage());
    return 0;
}
float percentage(float marks){
return( physics + maths + sanskrit) /3) *100;
}