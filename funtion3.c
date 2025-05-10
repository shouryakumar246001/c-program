#include<stdio.h>

void printnamaste();
void printbonjour();

int main(){
    printf("enter your nasnality f for french and i for indian ");
    char ch;
    scanf("%c", &ch);
        if(ch == 'i'){
        printnamaste();
        }
        else {
        printbonjour();
        }

    return 0;
}

void printnamaste()
{
    printf("mamaste");
}
void printbonjour()
{
    printf("bonjour");
}