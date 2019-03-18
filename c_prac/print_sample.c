#include <stdio.h>
#include <stdlib.h>

int read_file(struct set_values){
    
    FILE *fp;
    fp = fopen("sample.txt", "r");
    
    char term = "CCSD CORRELATION ENERGY";
    int  value =  -0.23930119037438;

    while (fscanf(fp, "%s %d", term, value) != EOF){
        fprintf(fp, "%s %d", term, value);
    }
    fclose(fp);
    return(0);
}
