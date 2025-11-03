#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a sentence with upper and lowercases:");
    scanf("%[^\n]", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;  // convert to uppercase
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;  // convert to lowercase
    }

    printf("Converted message: %s\n", str);
    return 0;
}

