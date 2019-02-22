#include <stdio.h>

int func1(void){
    printf("func1() is called \n");
    return 0;
}
void func2(int i){
    if(i<= 0) {
        printf("i in func2() = %d\n". i);
        return;
    }
    printf("i in func2() = %d \n", i);

int main() {
    int status;     /* declare current status */
    status = func1();
    printf("status = %d \n", status);
    func1();
    func2(10);
    func2(-10);
    return 0;
}
