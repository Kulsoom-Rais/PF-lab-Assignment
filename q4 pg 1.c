#include <stdio.h>

int main() {
    int arr[3][3][3];
    int i, j, k;
    int layerSum, totalSum = 0;

    
    printf("Enter elements for 3x3x3 array:\n");
    for (i = 0; i < 3; i++) {       
        printf("Layer %d:\n", i + 1);
        for (j = 0; j < 3; j++) {   
            for (k = 0; k < 3; k++) { 
                scanf("%d", &arr[i][j][k]);
            }
        }
    }

    
    for (i = 0; i < 3; i++) {
        layerSum = 0;
        printf("\nLayer %d:\n", i + 1);
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 3; k++) {
                printf("%d ", arr[i][j][k]);
                layerSum += arr[i][j][k];  
            }
            printf("\n");
        }
        printf("Sum of Layer %d = %d\n", i + 1, layerSum);
        totalSum += layerSum;  
    }

    printf("\nOverall total of all elements = %d\n", totalSum);

    return 0;
}

