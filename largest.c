#include<stdio.h>
int main()
{
    int i ,n;
    printf("enter the no of elements");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements ");
    for( i=1;i<n;i++){
    scanf("%d",&arr[i]);
}

int largest=arr[0];
for(i=1;i<n;i++){
if (arr[i]>largest){
    largest=arr[i];
}
}
printf("the largest number is %d ",largest);
}