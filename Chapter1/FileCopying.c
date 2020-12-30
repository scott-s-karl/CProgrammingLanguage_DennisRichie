#include <stdio.h>

int main(int argc, char const *argv[]) {

  int c;
  while((c=getchar()) != EOF){
    printf("\n");
    printf("--------\n");
    putchar(c);
    if(c == 'k'){
      break;
    }
  }
  return 0;
}
