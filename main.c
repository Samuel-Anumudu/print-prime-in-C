#include <stdio.h>
// import other external functions to have them work
#include "add.c"
#include "subtract.c"
#include "division.c"
#include "multiply.c"

int main(void) {

    add(5, 6);
    subtract(10, 3);
    division(200, 20);
    multiply(7, 5);
    
    return 0;
}