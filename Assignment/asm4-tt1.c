#include <stdio.h>
#include <stdlib.h>

int myGetline(char [], int);

int main(){
    char inputline[100];
    float miles;
    float gallons;
    float mpg; // mile per gallon. fuel efficiency.

    printf("Enter miles driven:\n");
    myGetline(inputline, 100);
    miles = atoi(inputline);

    printf("Enter gallons used:\n");
    myGetline(inputline, 100);
    gallons = atoi(inputline);

    mpg = miles / gallons;
    printf("You got %.2f mpg\n", mpg);

    return 0;
}

int myGetline(char line[], int max){
    int nch = 0;
    int c;
    max = max - 1;

    while((c = getchar()) != EOF){
         if(c == '\n')
             break;

         if(nch < max){
            line[nch] = c;
            nch = nch + 1;
         }
    }

    if(c == EOF && nch == 0) return EOF;

    line[nch] = '\0';
    return nch;
}

