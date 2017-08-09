#include <stdio.h>

int main(void){
    int fahrenheit;
    double celsius;

    printf("Enter the temprature in degree Fahrent\n");
    scanf("%d", &fahrenheit);
    celsius = (5.0/9.0) * (fahrenheit-32);
    printf("The converted temperature is %lf\n", celsius);

    return 0;
}
