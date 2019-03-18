#include <stdio.h>
#include <stdlib.h>

int main(){
    //Part 1: atoi
    char str1[10] = "572";
    int x=atoi(str1);
    printf("x= %d\n", x);

    /*Part 2: strtol */
    char str2[10]= " 123   3A";
    char *end = str2;
    long num;
    num = strtol(str2,&end, 10);
    printf("The first number is %li\n", num);
    num = strtol(

    //Part 3: sscanf
    int a, b;
}
