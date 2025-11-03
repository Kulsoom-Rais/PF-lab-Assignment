#include <stdio.h>

int main() {
    int arr[3][3][3];
    int i, j, k,row,col;
    int identical;

  
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
        for (j = i + 1; j < 3; j++) { 
            identical = 1; 
            for ( row= 0; row < 3; row++) {
                for ( col = 0; col < 3; col++) {
                    if (arr[i][row][col] != arr[j][row][col]) {
                        identical = 0;
                        break;
                    }
                }
                if (!identical) break;
            }
            if (identical)
                printf("Layer %d and Layer %d are IDENTICAL\n", i + 1, j + 1);
            else
                printf("Layer %d and Layer %d are DISTINCT\n", i + 1, j + 1);
        }
    }

    return 0;
}

