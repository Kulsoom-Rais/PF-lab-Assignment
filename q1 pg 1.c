#include <stdio.h>

int main() {
    float matrix[3][3], transpose[3][3], cofactor[3][3], adjoint[3][3], inverse[3][3];
    int i, j, m, n;
    float determinant = 0;

   
    printf("Enter elements of 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%f", &matrix[i][j]);
        }
    }

    
    printf("\nOriginal Matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%8.2f ", matrix[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            transpose[i][j] = matrix[j][i];
        }
    }

    printf("\nTranspose of Matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%8.2f ", transpose[i][j]);
        }
        printf("\n");
    }

  
    determinant = 0;
    for (i = 0; i < 3; i++) {
        determinant += (matrix[0][i] *
            (matrix[1][(i + 1) % 3] * matrix[2][(i + 2) % 3] -
             matrix[1][(i + 2) % 3] * matrix[2][(i + 1) % 3]));
    }

    printf("\nDeterminant = %.2f\n", determinant);

    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            int a = (i + 1) % 3;
            int b = (i + 2) % 3;
            int c = (j + 1) % 3;
            int d = (j + 2) % 3;
            cofactor[i][j] = (matrix[a][c] * matrix[b][d]) - (matrix[a][d] * matrix[b][c]);
            if ((i + j) % 2 != 0)
                cofactor[i][j] = -cofactor[i][j];
        }
    }

    printf("\nCofactor Matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%8.2f ", cofactor[i][j]);
        }
        printf("\n");
    }

  
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            adjoint[i][j] = cofactor[j][i];
        }
    }

    printf("\nAdjoint Matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%8.2f ", adjoint[i][j]);
        }
        printf("\n");
    }

    
    if (determinant == 0) {
        printf("\nInverse does not exist (determinant = 0).\n");
    } else {
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                inverse[i][j] = adjoint[i][j] / determinant;
            }
        }

        printf("\nInverse Matrix:\n");
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                printf("%8.4f ", inverse[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
