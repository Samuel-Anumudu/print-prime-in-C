#include <stdio.h>

// this function multiplies two decimal numbers
double multiplyTwoNumbers(double x, double y) {
    return x * y;
}

// this function divides the product of two decimal numbers
void divideProduct (double dividend ) {

    double divisor = multiplyTwoNumbers(3.0, 1.0);
    double result = dividend / divisor;
    printf("%lf divided by %lf is %.1lf\n", dividend, divisor, result);

}

// this function checks whether values passed fulfills a right angle triangle, i.e if a^2 + b^2 = c^2
int multiply (int num) {
    return num * num;
}

int square(int n) {
    return multiply(n);
}

void isRightAngleTriangle(int a, int b, int c) {

    square(a) + square(b) == square(c) ? 
    printf("It's right angle triangle!\n") :
    printf("Oops! Not right angle triangle!\n");

    /**
    if(square(a) + square(b) == square(c)) {
        printf("True, it's right angle triangle!\n");
    } else {
        printf("Oop! Not right angle triangle!\n");
    }
    **/

}

// <--------------- Main Function --------------

int main(void) {      
    // functions invokation

    divideProduct(64.0);
    isRightAngleTriangle(3,4,5);
    greatestCommonDivisor(30, 42);

    return 0;
}
// -------------------------------------------->