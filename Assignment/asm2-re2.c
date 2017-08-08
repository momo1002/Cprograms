#include <stdio.h>

int fibonacci(int n){
    if(n == 0) return 0;
    else if(n == 1) return 1;
    else return(fibonacci(n-1) + fibonacci(n-2));
}

int main(){
    int n;
    int result;

    scanf("%d", &n);
    if(n < 0) printf("not possible");
    else {
        result = fibonacci(n);
        printf("%d %d\n", n, result);
    }
    return 0;
}
