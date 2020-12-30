#include <stdio.h>

int main(int argc, char const *argv[]) {
        //Variables
        int c, i, nwhite, nother;
        // define the array
        int ndigit[10];


        nwhite = nother = 0;
        for (i = 0; i < 10; ++i){
                printf("%d\n",i );
        }
        for (i = 0; i < 10; ++i){
                ndigit[i] = 0;
        }
        while((c = getchar()) != '.'){
                if(c >= '0' && c <= '9'){
                        ++ndigit[(c-'0')];
                }
                else if(c == ' ' || c == '\t' || c == '\n'){
                        ++nwhite;
                }
                else{
                        ++nother;
                }
        }
        printf("digits =");
        for (i = 0; i < 10; ++i){
                printf(" %d\n",ndigit[i]);
        }

        printf("White space =  %d, other = %d\n",nwhite,nother);

        return 0;
};
