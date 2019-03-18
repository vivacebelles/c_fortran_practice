#include <stdio.h>

int main(){
    int counter = 0;

    FILE *fp =fopen("sample.txt", "r+");

    char c=getc(fp); //will get first character of file and stores in pointer

    while(c!=EOF){
        putchar(c);
        c=getc(fp);
        counter++;
    }
    fprintf(fp, "\n I counted %d characters in this file. \n", counter);

    return(0);
}
