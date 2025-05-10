#include<stdio.h>
float far(float celcius);
int main() {
    float fact = far(0);
    printf("the celcius is , %d" , fact);


return 0;
}
float far(float celcius){
    float fact=celcius*0.18+32;
    return fact;
}