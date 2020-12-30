#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20

int main(int argc, char const *argv[]) {

  int i;
  float cel;
  for(i = UPPER; i >= LOWER; i = i - STEP){
    cel = ((5.0/9.0) * (i - 32.0));
    printf("%4d %6.1f\n",i,cel);
  }
  return 0;
}
