#include <stdio.h>
int factorial(int);

int main(){
    factorial(10);
}

int factorial(int n){
    int i;
    int factorial = 1;

    for(i = 1; i <= n; i++){
        factorial = factorial * i;
        printf("%d %d\n", i ,factorial);
    }
    return 0;
}
