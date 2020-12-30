#include <stdio.h>
/* print Fahrenheit - Celcius table
  for f = 0, 20 , .... 300 */

int main(int argc, char const *argv[]) {
  // Declaration of variables - this must happen first in C
  // int variables - 16 bit signed number -32768 to 32767
  int upper, lower, step;

  // float variables - 32 bit quantity 10^-38 to 10^38
  float far, cel;

  lower = 0;
  step = 20;
  upper = 300;
  far = lower;
  printf("Fahr Celcius\n"); // Modification to print a heading
  while(far <= upper){
    cel = (5.0/9.0) * (far - 32.0);
    printf("%4.0f %6.1f\n", far, cel);
    far = far + step;
  }
  return 0;
}
