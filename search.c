#include<stdio.h>
int main (){
    int n, i , search ,found=0 ;
    printf("enter the number of elements");
    scanf("%d" ,&n);
    int arr[n];
    printf("enter the elements");
    for( i=0;i<n;i++){
    scanf("%d" ,&arr[i]);
}
printf("enter teh number to be searced");
scanf("%d" ,&search);
for(i=0;i<n;i++){
    if(search==arr[i]){
        found=1;
        break;
    }
}
if(found){
    printf("the number is found");

}
else{
    printf("not found");
}
}