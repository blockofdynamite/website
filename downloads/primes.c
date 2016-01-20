/*
*	PRIME NUMBER GENERATOR
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int isPrime(int prime);

int main() {
  int prime = 0;
  while(1 == 1) {
    prime++;
    if(isPrime(prime) == 1) {
      printf("%i\n", prime);
    }
  }

  return(0);
}

int isPrime(int prime) {
  int i;
  if(prime == 1 || prime == 2) {
  } else {
    for (i = 2; i < ((prime / 2) + 1); i++) {
      if(prime % i == 0) {
        return(0);
      }
    }
  }
  return(1);
}
