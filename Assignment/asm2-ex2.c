#include <stdio.h>

int main(){
    int i;
    int sum = 0;
    for(i = 1;i<=10;i++){
        sum += i*i; 
        if(i < 10){
            printf("%d + ", i*i);
        } else {
            printf("%d = ", i*i);
            printf("%d\n", sum);
        }
    }
}
