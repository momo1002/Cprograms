#include <stdio.h>

int main(){
    int i;
    int squares[11];

    for(i = 1; i <= 10; i++) squares[i] = i * i; 
        printf("n\tsquare\n");
        for(i = 1;i <= 10; i++) printf("%d\t%d\n", i, squares[i]);
            return 0;
}
