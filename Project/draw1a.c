#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
    time_t rawtime;
    struct tm * timeinfo;

    time (&rawtime);
    timeinfo = localtime (&rawtime);
    printf("./draw1a started on %s", asctime (timeinfo));

    for(int i = 1; i < argc; i++){
        printf("Input files: %s\n", argv[i]);
    }

    FILE *fp;
    char buffer[255];

    fp = fopen("inputfile.1","r");
    fscanf(fp, "%s\n", buffer);
    printf("1. fscanf : %s\n", buffer);
    
    fgets(buffer, 255, fp);
    printf("2. fgets : %s\n", buffer);

    int c = 0;
    char str[200];
    int count_Image  = 0;
    int count_lineTo,count_End,count_print,count_draw,count_translate,count_child,count_comment;

    while( (c = fgetc(fp)) != EOF ) {
          fscanf(fp,"%s",str);}

    switch(*str){
              case 'Image':
                  count_Image++;
                  break;
              case 'lineTo':
                  count_lineTo++;
                  break;
              case 'End':
                  count_End++;
                  break;
              case 'print':
                  count_print++;
                  break;
              case 'draw':
                  count_draw++;
                  break;
              case 'translate':
                  count_translate++;
                  break;
              case 'child':
                  count_child++;
                  break;
              case 'comment':
                  count_comment++;
                  break;
      }

    fclose(fp);

    return 0;
}
