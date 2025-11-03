#include <stdio.h>

int main(){
    int arr[10];
    int i, target;
    int count = 0;

    for(i = 0; i < 10; i++){
        printf("enter the number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\n");
    printf("enter the search num: ");
    scanf("%d", &target);

    for(i = 0; i < 10; i++){
        if(arr[i] == target){
            count++;
        }
    }

    if(count > 0){
        printf("The number %d occured %d times in the array.\n", target, count);
    }
    else{
        printf("Number not found in the array.\n");
    }

    return 0;
}

