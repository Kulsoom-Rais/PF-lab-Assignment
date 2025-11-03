#include <stdio.h>

int main() {
    int numbers[10];
    int i;
    int max, min;

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    max = numbers[0];
    min = numbers[0];

    for (i = 1; i < 10; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }

    printf("\nThe largest element is: %d\n", max);
    printf("The smallest element is: %d\n", min);
    printf("The difference (max - min) is: %d\n", max - min);

    return 0;
}

