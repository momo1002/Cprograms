#include <stdio.h>

int main(){
    int a[6] = {1,2,3,4,5,6};
    int sum = 0;
    int *pa;
    pa = a;

    for(int i = 0;i < 6;i++){
        sum = sum + *pa;
        *pa++;
    }
    printf("%d\n",sum);
    return 0;
}
