#include <stdio.h>
#include <string.h>

int strindex(char s[], char t[]);

int main(){
    printf("strindex(\"abcabc\", \"bc\") -> %d\n", strindex("abcabc", "bc"));
    printf("strindex(\"abcabc\", \"def\") -> %d\n", strindex("abcabc", "def"));
}

int strindex(char s[], char t[]){
    int lens = strlen(s);
    int lent = strlen(t);

    int i;
    int j;
    int k;

    for(i = lens - lent; i >= 0; i--){
        for(j = 0, k = i; t[j] != '\0' && t[j] == s[k]; j++, k++)
            ;
        if(j > 0 && t[j] == '\0'){
            return i;
        }
    }
    return -1;
}
