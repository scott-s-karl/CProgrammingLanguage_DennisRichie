#include <stdio.h>
int main(int argc, char const *argv[]) {

        int c;

        while ((c = getchar()) != EOF) {
                if(c == '\t'){
                        printf("-\b>");
                }
                else if(c == '\b'){
                        printf("<\b-");

                }
                else{
                        putchar(c);
                }

        }
        return 0;
}
