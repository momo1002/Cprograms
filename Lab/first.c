#include <stdio.h>

int main(){
	int num1;
	int num2;
	
	printf("Please enter integers with a space: ");
        scanf("%d %d", &num1, &num2);
	int sum = num1 + num2;
	printf("%d plus %d equals %d.\n",num1, num2, sum);

	int num3;
        int num4;
		
        int arr1[5];
        int arr2[5];

	for(int i = 0;i < 5; i++){
		printf("Please enter integers with a space: ");
		scanf("%d %d", &num3, &num4);

		arr1[i] = (int) num3;
		arr2[i] = (int) num4;	
	}
	for(int i = 0;i < 5 ;i++){
		printf("%d %d\n",arr1[i], arr2[i]);
	}
}
