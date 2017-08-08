#include <stdio.h>
int printsquare(int);

int main(){
    int i;
    for(i = 1; i <= 10; i++){
        printsquare(i);
        printf("\n");
    }
    return 0;
}

int printsquare(int n){
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++) printf("*");
        printf("\n");
    }
    return 0;
}
