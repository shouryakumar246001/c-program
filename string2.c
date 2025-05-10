#include<stdio.h>
#include<string.h>

// Function to copy one string to another
void cpystring(char string1[50], char string2[50]) {
    int i;
    for(i = 0; string2[i] != '\0'; i++) { // Iterate over string2 until null terminator
        string1[i] = string2[i];         // Copy each character from string2 to string1
    }
    string1[i] = '\0'; // Add null terminator at the end of string1
    printf("The copied string is: %s\n", string1);
}

int main() {
    char string1[50];
    char string2[50];

    // Input the source string
    printf("Enter the source string: ");
    scanf("%s", string2);

    // Call the user-defined function to copy the string
    cpystring(string1, string2);

    return 0;
}
