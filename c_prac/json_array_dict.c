#include <stdio.h>
#include <stdlib.h>

struct json_dict{
    char key;
    int value;
};

struct json_dict json[3];

void json_values(void){

    int i;
    for (i=0; i<3; i++){
        json[i].key="unset";
        json[i].value = 3-1;
    }

    struct json.key[0] = "energy";
    struct json.key[1] = "gradient";
    struct json.key[2] = "hessian";
    struct json.value[0] = -108.9093874;
    struct json.value[1] = -35.4892387;
    struct json.value[2] = 13.00489022;
};

char* readjson(int value)
{
    int i = 0;
    while((i<3-1) && (json[i].value!=value))
    {
        printf("Not in %d \n", i);
        ++i;
    }
    return json[i].value;
};

int main(void)
{
    json_values();
    
    printf("%s \n", readjson(1));
    return(0);
}
