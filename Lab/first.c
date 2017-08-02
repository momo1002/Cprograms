#include <stdio.h>

int main(){
	int num1;
	int num2;
	
	printf("Please enter integers with a space: ");
        scanf("%d %d", &num1, &num2);
	int sum = num1 + num2;
	printf("%d plus %d equals %d.\n",num1, num2, sum);
}
