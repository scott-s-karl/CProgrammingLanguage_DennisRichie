#include <stdio.h>
int main(int argc, char const *argv[]) {
  int nl, c;
  nl = 0;
  while((c = getchar()) != '.'){
    if(c == '\n'){
      ++nl;
    }
  }
  printf("nl is %d\n",nl);
  return 0;
}
