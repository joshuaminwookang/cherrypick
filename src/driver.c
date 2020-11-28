#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
#include <fcntl.h>
#include <math.h>

int main (int argc, char *argv[]){
    int n = 0;
    int l = 100;
    struct timeval start_tv,end_tv;
    long long start_time, end_time;

    if (argc > 1) n = atoi(argv[1]); 
    if (argc > 2) l = atoi(argv[2]); 

    /* FILE *fptr; */
    /* fopen("result.txt","w"); */

    /* if(fptr == NULL){ */
    /*     printf("Error!");    */
    /*     exit(1);              */
    /* } */

    /* fprintf(fptr,"%s", "name, sw_performance"); */
    /* fclose(fptr); */

    char snum[5];
    sprintf(snum, "%d", n);

    char* program = (char*)malloc(20 * sizeof(char));
    strcpy(program, "../dataset/");
    strcat(program, snum);
    strcat(program, " > /dev/null");
    
    printf("START TEST\n");
    gettimeofday(&start_tv,NULL);
    start_time = start_tv.tv_sec * pow(10,6) + start_tv.tv_usec;
    //start_time = start_tv.tv_sec;

    //strcat(program, "\n");
    for (int i=0; i<l; i++) {
        int status = system(program);
    }
    gettimeofday(&end_tv,NULL);
    end_time = end_tv.tv_sec * pow(10,6) + end_tv.tv_usec;
    //end_time = end_tv.tv_sec;
    
    printf("TIME: %lld\n", end_time-start_time);

    printf("%s\n", program);

    free(program);
    return 0;

}

//int status = system("./foo 1 2 3");
