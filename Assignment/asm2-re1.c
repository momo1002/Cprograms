#include <stdio.h>

int factorial(int x){
    int i;
    int fact = 1;
    for(i = 2; i <= x; i++)
        fact = fact * i;

    return fact;
}

int main(){
    int i;
    int myNum = 10;
    for(i = 1; i <= myNum; i++)
        printf("%d %d\n", i, factorial(i));

    return 0;
}
