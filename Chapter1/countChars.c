#include <stdio.h>
int main(int argc, char const *argv[]) {
  /*long nc;
  nc = 0;
  while(getchar() != EOF){
    ++nc;

  }
  printf("%ld\n", nc);*/

  double nc;
  for (nc=0; getchar() != '.'; ++nc){
    ;
  }
  printf("%.0f\n",nc );
  return 0;
}
