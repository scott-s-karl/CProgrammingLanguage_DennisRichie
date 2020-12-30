#include <stdio.h>

#define YES 1
#define NO 0


int main(int argc, char const *argv[]) {
        //Variable definition
        int c, nl, nw, nc, inword;

        inword = NO;
        nl = nw = nc = 0;
        while((c = getchar()) != '.'){
                ++nc;
                if(c == '\n'){
                        ++nl;
                }
                if(c == '\t' || c == ' ' || c == '\n'){
                        inword = NO;
                }
                else if(inword == NO){
                        if((c >='a' && c <='z')|| (c >='A' && c <='Z')){
                                inword = YES;
                                ++nw;
                                putchar(c);
                        }
                }
                else if((c >='a' && c <='z')|| (c >='A' && c <='Z')|| (c >=0 && c <=9) || c == '\''){
                        ;
                }
                else{
                        inword = NO;
                }
        }
        printf("line count is %d char count is %d word count is %d\n", nl,nc,nw);

}
