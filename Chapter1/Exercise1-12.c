#include <stdio.h>

#define YES 1
#define NO 0
#define MAXHIST 15
#define MAXWORD 11

int main(int argc, char const *argv[]) {
        int c, nc, inword, i;
        int len;        //Length of each bar
        int maxvalue;   //Maximum value for wl[]
        int wl[MAXWORD];      // word length counters


        inword = NO;
        nc = 0;

        //Initialize all of the word lengths to be 0
        for (i = 0; i < MAXWORD; i++) {
                wl[i] = 0;
        }
        //Loop through the input string
        while ((c = getchar()) != '.') {

                // If the character is a space or break then its the end of the word
                if (c == '\n' || c == '\t' || c == ' ') {
                        inword = NO;
                        if (nc > 0 && nc < MAXWORD) {
                                ++wl[nc];
                        }
                        nc = 0;
                }
                // Else if the char is a letter and a word is not current then create it
                else if (inword == NO) {
                        inword = YES;
                        nc = 1;
                }
                // Else if your in the middle of a word then add the char
                else {
                        ++nc;
                }
        }
        // Loop through the array of word lengths and print them
        maxvalue = 0;
        for (i = 1; i < MAXWORD; i++) {
                if(wl[i] > maxvalue){
                        maxvalue = wl[i];
                }
        }
        printf("The max value is: %d\n",maxvalue );

        // With a scaling factor
        printf("Histogram with a scaling factor:\n");
        for (i = 1; i < MAXWORD; i++) {
                printf("%5d - %5d : ",i,wl[i]);
                if (wl[i] > 0) {
                        len = (wl[i] * MAXHIST / maxvalue);
                        if (len <= 0) {
                                len = 1;
                        }
                }
                else {
                        len = 0;
                }

                while (len > 0) {
                        putchar('*');
                        --len;

                }
                putchar('\n');
        }
        // No scaling
        printf("\n");
        printf("Histogram without a scaling factor:\n");
        for (i = 1; i < MAXWORD; i++) {
                printf("%5d - %5d : ",i,wl[i]);
                len = wl[i];
                while (len > 0) {
                        putchar('*');
                        --len;

                }
                putchar('\n');
        }

        return 0;
}
