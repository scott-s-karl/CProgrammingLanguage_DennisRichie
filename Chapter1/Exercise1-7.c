#include <stdio.h>
int main(int argc, char const *argv[]) {
        int c,lastc;
        while((c = getchar()) != '.'){
                //Could use an if else or use an or ||
                if(c != ' '){
                        putchar(c);
                }
                if(c == ' '){
                        if(lastc != ' '){
                                putchar(c);
                        }
                }
                lastc = c;

        }
        return 0;
}
