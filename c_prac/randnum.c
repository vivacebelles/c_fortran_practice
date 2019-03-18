#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>

int main(){
    uint32_t winner; //unsigned integer that is 32 bits named winner
    srand(time(0));
    while(getchar()!='x'){
        winner = rand()%40000+1;
        printf("And the winner is #%i \n", winner);
    }
    return(0);
}
