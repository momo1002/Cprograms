#include <stdio.h>

void printchars(char,int);

int main(){
    printchars("a",8); 
}
void printchars(char ch, int n){
    int i,j;
    for(i = 1; i <= n; i++){
        for(j =1; j <= i; j++)
            printf("%c",ch);

        printf("\n");
    }
}
