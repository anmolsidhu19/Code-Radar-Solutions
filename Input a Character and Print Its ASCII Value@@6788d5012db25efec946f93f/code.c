#include <stdio.h>

int main() {
    char character;

    // Take input from the user
    printf(": ");
    scanf("%c", &character);

    // Print the ASCII value
    printf("ASCII Value :'%c' %d\n", character, character);

    return 0;
}