#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&x);
if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        // Convert to lowercase for easier comparison
        char lower = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;

        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
            printf("Vowel");
        } else {
            printf("Consonant");
        }
    }
    else if (ch >= '0' && ch <= '9') {
        printf("Digit");
    }
    else  ((ch >= 33 && ch <= 47) || (ch >= 58 && ch <= 64) ||
             (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 126)) {
        printf("Special Character");
    }
    
    return 0;
}