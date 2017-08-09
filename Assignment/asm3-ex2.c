#include <stdio.h>

int multbytwo(int);
int main(){
    int i, j;
    i = 3;
    j = multbytwo(i);
    printf("%d\n", j);
    return 0;
}

int multbytwo(int x){
    x = x * 2;
    return x;
}
