
#include <stdio.h>
void printsum();

int sum(int a, int b) {
    return a + b;
} 
int main() {
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    int result = sum(a, b);
    printf("The sum is %d\n", result);
}
