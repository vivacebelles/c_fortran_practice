#include <stdio.h>
#include <math.h>
#include <string.h>

/* practice of structures */

#include "struct1_prac.c"

int print_student_info(){
    printf(""" VARIABLE MAP: \n Student id: %d \n Student name: %s""", sp->id, sp->name);

    return 0;
}
