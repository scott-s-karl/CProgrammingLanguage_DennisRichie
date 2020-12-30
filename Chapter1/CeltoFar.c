#include <stdio.h>
/* print Fahrenheit - Celcius table
  for f = 0, 20 , .... 300 */

int main(int argc, char const *argv[]) {
  // Declare the variables
  int upper, lower, step;
  float far, cel;

  upper = 300;
  lower = 0;
  step = 20;

  printf("Celcius Far\n");
  cel = lower;
  while(cel <= 300){
    far = ((cel) * (9.0/5.0)) + 32.0;
    printf("%4.1f %4.1f\n",cel,far);
    cel = cel + step;
  }
  return 0;
}
