#include<stdio.h>
int main(){
    int i , j , rows, columbs ,sum=0;
    printf("eneter the no of elements ");
    scanf("%d", &rows);
    printf("eneter the no of elements ");
    scanf("%d", &columbs);

    int matrix[rows][columbs];

    printf("enter the elemets of teh matrix");
for(i=0;i<rows;i++){
    for(j=0;j<columbs;j++){
        printf("elements %d %d" , i+1,j+1);
        scanf("%d" ,&matrix[i][j]);
    }
}
for(i=0;i<rows;i++){
    for (j=0;j<columbs;j++){
        sum=sum+matrix[i][j];
    }
}
printf("the sum is %d" ,sum);
}
