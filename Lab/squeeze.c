#include <stdio.h>
#include <string.h>

void squeeze(char* s1, char* s2);

int main(){
	char s1[] = "hello world";
	char s2[] = {'a','b','c','d','e','\0'};
	squeeze(s1, s2);
	printf("%s\n", s1);
	return 0;
}

void squeeze(char* s1, char* s2){
	int i, j, k;
	for(i = k = 0; s1[i] != '\0'; i++){
		for(j = 0; s2[j] != '\0'; j++){
			if(s1[i] == s2[j])
				break;
		}
		if (s2[j] == '\0'){
			s1[k++] = s1[i];
		}
	}
	s1[k] = '\0';
}
