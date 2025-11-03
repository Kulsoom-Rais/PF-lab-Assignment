#include <stdio.h>
int main(){
	char str[100];
	printf("Enter the element of string: \t");
	scanf("%[^A-Za-z]", &str);
	printf("You have entered %s", str);
	return 0;
}
