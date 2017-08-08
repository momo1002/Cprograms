#include <stdio.h>
int printsq(int);

int main(){
    printsq(10);
}
int printsq(int n){

    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(i == 0 || i == n-1) printf("*");
            else if(j == 0 || j == n-1) printf("*");
            else printf(" ");
        }
        printf(" ");
    }
    printf("\n");
    return 0;
}
