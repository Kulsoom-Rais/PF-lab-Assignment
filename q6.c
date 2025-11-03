#include <stdio.h>

int main() {
    char arr[20];
    int i, vowels = 0, consonants = 0;
    char ch;

    printf("\n enter the string:");
    scanf("%[^\n]", arr); 
    printf("\n entered string is: %s", arr);

    for (i = 0; i < 5; i++) {
        ch = arr[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        } else {
            consonants++;
        }
    }

    printf("\n number of consonants are: %d", consonants);
    printf("\n number of vowels are: %d", vowels);
    return 0;
}

