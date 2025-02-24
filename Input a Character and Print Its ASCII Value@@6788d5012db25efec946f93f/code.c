#include <stdio.h>

int main() {
    char character;

    // Take input from the user
    printf("Enter a character: ");
    scanf("%c", &character);

    // Print the ASCII value
    printf("The ASCII value of '%c' is %d\n", character, character);

    return 0;
}