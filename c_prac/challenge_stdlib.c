#include <stdio.h>
#include <stdlib.h>

/*will copy existing text file, ask for source and copy file name */

int main(){

    char source[100], targetcopy[100];

    printf("What file do you want to access?");
    scanf("%s", source);
    printf("What would you like to copy it as?");
    scanf("%s", targetcopy);

    FILE *src_file= fopen(source, "r");
    FILE *tgt_file= fopen(targetcopy, "w+");
    char c= getc(src_file);

    while(c!=EOF){
        putc(c, tgt_file);
        c=getc(src_file);
    }
   return (0);
} 
