#include <stdio.h>
#include <stdlib.h>

#define JSONLIST 100

struct json_dict
{
    char * key;
    int value;
};

void json_print(void)
{
    char file_name = "sample.txt";
    FILE *f;
    f = fopen(file_name, "r");

    while ((ch = fgetc(f)) !=EOF)
        fgets(
