#include <stdio.h>

// implicit type conversion

/* int main() {
    int x = 10;   // integer x
    char y = 'a'; // character c

    // y implicitly converted to int. ASCII
    // value of 'a' is 97
    x = x + y;

    // x is implicitly converted to float
    float z = x + 1.0;

    printf("x = %d, z = %f", x, z);
    return 0;
} */

// Explicit type conversion

/* int main() {
    double x = 1.2;
   
    // Explicit conversion from double to int
    int sum = (int)x + 1;
   
    printf("sum = %d", sum);
   
    return 0;
} */

int main() {
  float a = 1.7;
  int b = (int)a;
 
  printf("a = %f\n", a);
  printf("b = %d\n", b);
 
  return 0;
}
