#include <stdio.h>

main(){
	int a = 0;
	for(int i = 0; i <2; i++){
		int b = ++a;
		int c = a++;
		printf("%d %d\n",b,c);
}
