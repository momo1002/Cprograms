#include <stdio.h>

#define MAXLINE 100

int getLocation(char location[], int maxline);
int any(char s1[], char s2[]);

int main(void){
	char s1[MAXLINE], s2[MAXLINE];
	int val;

	getLocation(s1, MAXLINE);
	getLocation(s2, MAXLINE);

	val = any(s1, s2);
	printf("%d\n",val);
	return 0;
}

int getLocation(char s[], int l){
	int i;
	int c;
	for(i = 0; i<l-1 && (c = getchar()) != EOF && c != '\n';++i)
		s[i] = c;
	if(c=='\n')
		s[i++] = c;
	s[i] = '\0';
}

int any(char s1[], char s2[]){
	int i,j, check_next_char;
	check_next_char = 1;
	
	for(i = 0; s1[i] != '\0' && (check_next_char);){
		for(i = 0; s1[i] != '\0' && (s1[i] != s2[j]); ++j)
			;

		if(s2[j] == '\0'){
			check_next_char = 1;
			i++;
		} else 
			check_next_char = 0;
	}

	if(s1[i] == '\0')
		return -1;
	else
		return i;
}
