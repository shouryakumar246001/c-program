#include<stdio.h>
int main()
{
    int n , i, sum =0;;
    printf("enter the number of elements");
    scanf("%d" ,&n);
    int arr[n];
    printf ("enter the elements");
    for(i=0;i<n;i++) {
        scanf("%d" ,&arr[i]);
    }
    for(i=0;i<n;i++){

        sum += arr[i];
    }
printf("the sum of thr elementd are %d " ,sum);
 
}