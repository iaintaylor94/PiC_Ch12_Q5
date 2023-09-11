// Program to test if a specific bit is on in an unsigned int, and to set a specific bit to 1

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// Declare Functions
bool bit_test (unsigned int, int);
unsigned int bit_set (unsigned int, int);

int main(void) {

  unsigned int initialBit = 16; // Bit 4

  printf ("0: %d\n", bit_test (initialBit, 0)); // False
  printf ("1: %d\n", bit_test (initialBit, 1)); // False
  printf ("2: %d\n", bit_test (initialBit, 2)); // False
  printf ("3: %d\n", bit_test (initialBit, 3)); // False
  printf ("4: %d\n", bit_test (initialBit, 4)); // True
  printf ("5: %d\n", bit_test (initialBit, 5)); // False
  printf ("6: %d\n", bit_test (initialBit, 6)); // False
  printf ("7: %d\n", bit_test (initialBit, 7)); // False
  printf ("\n");

  initialBit = bit_set (initialBit, 2);

  printf ("0: %d\n", bit_test (initialBit, 0)); // False
  printf ("1: %d\n", bit_test (initialBit, 1)); // False
  printf ("2: %d\n", bit_test (initialBit, 2)); // True
  printf ("3: %d\n", bit_test (initialBit, 3)); // False
  printf ("4: %d\n", bit_test (initialBit, 4)); // True
  printf ("5: %d\n", bit_test (initialBit, 5)); // False
  printf ("6: %d\n", bit_test (initialBit, 6)); // False
  printf ("7: %d\n", bit_test (initialBit, 7)); // False
  printf ("\n");
  
  return 0;
}

// Define Functions
bool bit_test (unsigned int input, int n) {
  unsigned int nMask = pow (2, n);

  if ((input & nMask) > 0)
    return true;
  else
    return false;
}

unsigned int bit_set (unsigned int input, int n) {
  unsigned int nMask = pow (2, n);

  return input | nMask;
}