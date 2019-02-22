#include <stdio.h>
#include <math.h>
#include <string.h>

/* practice of structures */

struct Student {
    int id;
    char name[64];
};

int main() {
    struct Student s, *sp;
    sp = &s; /* sp pointer to s*/
    sp->id = 101;
    strcpy(sp->name, "John");
    printf("This is an example of what to put down: \n"); 
    printf("sp->id = %d\n", sp->id);
    printf("sp->name = %s\n", sp->name);
    
    /* obtain the user input from the keyboard */
    printf("Please input id and name\n");
    scanf("%d%*c", &sp->id); /*skip the newline character*/
    fgets(sp->name, sizeof(sp->name), stdin);
    sp->name[strlen(sp->name)-1] = '\0';
    printf("sp->id = %d\n", sp->id);
    printf("sp->name = %s\n", sp->name);
    
    /*try to get the variable again*/
    static struct Student s;
    printf("id.Student");
   
    return 0;
}
