#include<stdio.h>
#include<string.h>

int main() {
    char string1[20];  // Source string
    char string2[30];  // Destination string

    // Input the source string
    printf("Enter the source string: ");
    scanf("%s", string1);  // Use string1 to hold input

    // Copy the string using strcpy
    strcpy(string2, string1);

    // Output the copied string
    printf("The copied string is: %s\n", string2);

    return 0;
}
