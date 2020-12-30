#include <stdio.h>
int main(int argc, char const *argv[]){
        //Define variables
        int c, nl, bl, tl;

        nl = 0;
        bl = 0;
        tl = 0;

        while((c = getchar()) != '.'){
                if(c == '\t'){
                        ++tl;
                }
                else if(c == '\n'){
                        ++nl;
                }
                else if(c == ' '){
                        ++bl;
                }
        }
        printf("new line count is: %d\ntab count is: %d\nblank count is: %d\n",nl, tl, bl);

        return 0;
}
