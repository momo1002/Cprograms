#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int randrange(int n);

int main(){
    int i;
    int d1,d2;
    int a[12];
    float total = 0;
    float sumpow = 0;

    for(i = 2; i <= 12; i++)
        a[i] = 0;

    for(i = 0; i < 100; i++){
        d1 = randrange(6);
        d2 = randrange(6);
        total = d1 + d2;
        sumpow = sumpow + ((d1 + d2) * (d1 + d2));
        a[d1 + d2] = a[d1 + d2] + 1;
    }

    for(i = 2; i <= 12; i++)
        printf("%d: %d\n", i, a[i]);

    printf("Average: %f\n", total/100);
    printf("Standard deviation: %f\n", sqrt((sumpow - total * total/100) / (100-1)));

    return 0;
}

int randrange(int n){
    time_t t;

    /* Intializes random number generator */
    srand((unsigned) time(&t));
    return rand() / (RAND_MAX / n + 1);
}
