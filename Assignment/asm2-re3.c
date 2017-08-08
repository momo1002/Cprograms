#include <stdio.h>

int bunnyEars2(int n){
    if(n == 0) return 0;
    if(n % 2 == 0) return 3 + bunnyEars2(n - 1);
    return 2 + bunnyEars2(n -1);
}

int main(int n){
    scanf("%d", &n);
    printf("%d\n",bunnyEars2(n));
}
