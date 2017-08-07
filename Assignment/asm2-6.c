#include <stdio.h>

int main(){
    int day, i;
    for(day = 1; day <= 3; day++){
        printf("On the ");
            if(day == 1) printf("first");
            else if(day == 2) printf("second");
            else if(day == 3) printf("third");
            else if(day == 4) printf("fourth");
            else if(day == 5) printf("fifth");
            else if(day == 6) printf("sixth");
            else    printf("%d", day);
            printf(" day of Christmas, ");
            printf("my true love gave to me\n");
    }
    return 0;
}
