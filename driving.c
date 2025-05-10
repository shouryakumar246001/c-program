#include<stdio.H>

int main ()

{
    int age ;
    printf("enter a age ");
    scanf("%d" , &age);
    printf("age is : %d" , age);        
    if (age > 18 ) {
        printf("YOU ARE ELIGIBLE FOR DRIVE ");

    }
    else{
        printf("you are not eligible");
    }
    return 0 ;
}