#include<stdio.h>
int main(){
	int r,c,i,j,mat[5][5];
	
	printf("enter no of rows for matrix (max 5) ");
	scanf("%d",&r);
	
	printf("enter no of columns(max 5)");
	scanf("%d",&c);
	
	printf("enter the element of matrix\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&mat[i][j]);
		}
	}
	printf("your matrix is:\n");
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
		printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
	if (r==1){
		printf("row matrix");
	}
	if  (c==1){
		printf("column matrix");
	}
	if (r==c){
		printf("matrix is square matrix");
		
	}
	else{
		printf("mtrix is rectangular matrix");
		
	}
	if (r==c && mat[i][j] ==0){
		printf("matriz is  null  matrix");
		
	}
if (r==c &&  i==j && mat[i][j]==1 && mat[i][j]!=0 ){
	printf("matrix is involutry");
}
if(r==c && i!=j && mat[i][j]!=0){
	printf("matrix is diagonal");
	
}

if(i>j && mat[i][j]!=0){
	printf("matrix is upper triangular matrix");
	
}
if(i<j && mat[i][j]!=0){
	printf("matrix is upper triangular matrix");}

if (mat[i][j] != mat[j][i]){
	printf("matrixis symmentric");
}
else{
	printf("skew symmetric");
}
int det;
 if(r== 2) {
            int det = mat[0][0]*mat[1][1] - mat[0][1]*mat[1][0];
            if(det == 0) printf(" Singular Matrix\n");
            else printf(" Non-Singular Matrix\n");
        }
   char choice;
   int mat2[5][5];
    printf("\nDo you want to compare with another matrix? (y/n): ");
    scanf(" %c", &choice);
    if(choice == 'y' || choice == 'Y') {
        printf("Enter elements of the second matrix:\n");
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                printf("Elements  = ", i, j);
                scanf("%d", &mat2[i][j]);
            }
        }

        int equal = 1;
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                if(mat[i][j] != mat2[i][j]) equal = 0;
            }
        }
        if(equal) printf("Matrices are Equal\n");
        else printf(" Matrices are NOT Equal\n");
    }       
 return 0;    
        
}
