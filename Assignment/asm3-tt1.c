#include <stdio.h>

int main(){
    int i,j;
    printf(" ");
    for(j = 1; j<=10; j++) {
        if(j==1) printf("%4d",j);
        else printf("%3d",j);
    }
        printf("\n");
    for(i = 1; i <= 10; i++){
        printf("%2d", i);
        for(j = 1; j <= 10; j++) printf("%3d", i + j);
            printf("\n");
    }
    return 0;
}
