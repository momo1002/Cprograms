#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int randrange(int n){
    return rand() / (RAND_MAX / n + 1);
}

void printHistogram(int n){
    for(int i = 0; i < n; i++) printf("%c", '*');
}

int main(){
    int i;
    int d1, d2;
    int a[12];
    float total = 0;
    float sumpow = 0;

    for(i = 2; i <= 12; i++) a[i] = 0;

    for(i = 0; i < 100; i++){
        d1 = randrange(6);
        d2 = randrange(6);
        total = d1 + d2;
        sumpow = sumpow + ((d1 + d2) * (d1 + d2));
        a[d1 + d2] = a[d1 + d2] + 1;
    }

    for(i = 2; i <= 12; i++){
        printf("%d: %d ", i, a[i]);
        printHistogram(a[i]);
        printf("\n");
    }

    printf("Average: %f\n", total/100);
    printf("Standard deviation: %f\n", sqrt((sumpow - total * total/100) / (100 - 1)));

    return 0;
}
