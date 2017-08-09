#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    int d1, d2;
    int a[12];

    for(i = 2; i<=12; i++) a[i] = 0;
    for(i = 0; i<100; i++){
        d1 = rand() % 6 +1;
        d2 = rand() % 6 +1;
        a[d1 + d2] = a[d1 + d2] +1;
    }

    for(i = 2; i<=12;i++) printf("%d: %d\n", i, a[i]);

    return 0;
}
