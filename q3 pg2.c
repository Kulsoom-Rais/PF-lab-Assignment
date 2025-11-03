#include <stdio.h>

int main() {
    int marks[10], pass[10], fail[10];
    int i, passcount = 0, failcount = 0;
    float passsum = 0, failsum = 0;
    
    printf("Enter marks for 10 students (-1 to stop):\n");

    for (i = 0; i < 10; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &marks[i]);
        if (marks[i] == -1)
            break;
        if (marks[i] >= 5 && marks[i] <= 10) {
            pass[passcount++] = marks[i];
            passsum += marks[i];
        } else if (marks[i] >= 0 && marks[i] < 5) {
            fail[failcount++] = marks[i];
            failsum += marks[i];
        }
    }

    printf("Passed Students\n");
    for (i = 0; i < passcount; i++)
        printf("%d ", pass[i]);
    printf("\nAverage of pass marks: %.2f\n", passsum / passcount );

    printf("Failed Students \n");
    for (i = 0; i < failcount; i++)
        printf("%d ", fail[i]);
    printf("\nAverage of fail marks: %.2f\n",  failsum / failcount );

    return 0;
}

