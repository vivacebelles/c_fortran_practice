#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const *argv[])
{
    FILE* f;
    f = fopen("sample.txt", "r");
    char arr[100][50];
    int i = 0;
    while(1){
        char r = (char)fgetc(f);
        int k = 0;
        while(!feof(f)){
            arr[i][k++] = r;
            r = (char)fgetc(f);
        }
        arr[i][k] = 0;
        if(feof(f)){
            break;
        }
        i++;
    }
    int j;
    for(j=0;j<=i;j++){
        printf("%s \n", arr[j]);
    }
    return 0;
}
