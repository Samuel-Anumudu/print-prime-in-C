#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void prime() {
    // counter for our loop to check from p to 100 numbers (outer loop)
    int p;
    // inner loop counter
    int i;
    // create an array which is going to hold integer of primes
    int primes[50] = {0}; 
    // skip all of the even numbers with prime index
    int primeIndex = 2;

    bool isPrime;

    // assign values to primes array
    primes[0] = 2;
    primes[1] = 3;

    for ( p = 5; p <= 100; p = p + 2) {

        isPrime = true;

        for( i = 1; isPrime && p / primes[i] >= primes[i]; i++) {

            if ( p % primes[i] == 0) {
                isPrime = false;
            }
        }

        if(isPrime == true) {
            primes[primeIndex] = p;
            primeIndex++;
        }
    }

    for ( i = 0; i < primeIndex; i++ ) {
        printf("%d ", primes[i]);
    }

    printf("\n");
}


int main(void) {
    
    prime();
    return 0;
}