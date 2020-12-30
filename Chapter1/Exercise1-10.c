#include <stdio.h>

#define YES 1
#define NO 0


int main(int argc, char const *argv[]) {

        //Define variables
        int c,inword;
        inword = NO;

        while((c = getchar()) != '.'){
                if(c == ' ' || c == '\t' || c == '\n'){
                        if(inword == YES){
                                putchar('\n');
                                inword = NO;
                        }

                }
                else if(inword == NO){
                        putchar(c);
                        inword = YES;
                }
                else{
                        putchar(c);
                }
        }
        return 0;
}
