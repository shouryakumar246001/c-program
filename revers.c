#include<stdio.h>
int main()
{
    int n , i;
    printf("enter the number of elements");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements ");
    for(i=0;i<n;i++){
        scanf("%d" ,&arr[i]);
    }
    printf("reversed number are \n");
    for(i=n-1;i>=0;i--);
    printf("%d" ,arr[i]);
    printf("\n");
}