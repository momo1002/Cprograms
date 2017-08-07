#include <stdio.h>

int main() {
    int i;
    int count = 0;
    for(i = 1; i <= 10;i++){
        if(i > 3){
         count++;
        }
    }
    printf("Count %d", count);
}
