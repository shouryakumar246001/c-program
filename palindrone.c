#include<stdio.h>
int ispalindron(int n);
int main() {
    int num;
    printf("enter the numebr ");
    scanf("%d" ,num);
    if(ispalindron(num)){
        printf("the number is palindrone %d" ,num);
    }
    else{
        printf("not palindrone");
    }
    
}

int ispalindrone(int n) {
    int original=n;
    int orignal ,digit , reversed=0;
    while(n!=0){
        digit= n%10;
        reversed=reversed*10+digit;
        n=n/10;
        
    }
    if (original==reversed){
        return 1;

    }
    else{
        return 0;
    }

}