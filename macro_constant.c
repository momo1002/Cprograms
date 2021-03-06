#include <stdio.h>

// #define identifier value
#define MAX_NUM 1024
#define TRUE 1
#define FALSE 0
#define NEWLINE '\n'


int main(){
	// const = constant  prefix to declare constants with a specific type
	int i;
	i = 10 + 2 + MAX_NUM;
	printf("%c",NEWLINE);
	// const char NEWLINE = '\n';

	printf("%dNEWLINE\n", i);
	printf("%d\n", 0xab); // 171 hex
	printf("%d\n", 215u);
	printf("%ld\n", 30l);
	printf("%lu\n", 201ul);
	printf("%d\n", 11); // 9 octal ?
	
	printf("%f\n", 3.1415);
	printf("%Lf\n", 31415E-5L);

	printf("%c\n", 'x');
	printf("%c\n", 'a');
	printf("%c\n", '\t');
	printf("%c\n", '\"');

	if (TRUE){
		printf("This is TRUE!\n");
	}

	return 0;
}
