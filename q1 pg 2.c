#include <stdio.h>
int main(){
	int arr[5];
	int i, lastelement;
	printf("Enter 5 integers: \n");
	
	for(i=0; i<5; i++){
		printf("Enter element %d: ", i);
		scanf("%d", &arr[i]);
	}
	lastelement = arr[4];
	for(i=4; i>0; i--){
		arr[i]= arr[i-1];
		
	}
	arr[0]= lastelement;
	printf("\nArray after shifting:\t");
	for(i=0; i<5; i++){
		printf("%d", arr[i]);
	}
	printf("\n");
	return 0;
}
