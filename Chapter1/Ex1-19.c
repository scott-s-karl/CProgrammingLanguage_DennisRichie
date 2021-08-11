// Steven Karl
/*Problem statement:
Write a program detabh which replaces the tabs in the input with the proper
number of blanks to space to the next tab stop. Assume a fixed set of tab stops
say every n positions.
*/

// Libraries
#include <stdio.h>

int main(int argc, char const *argv[]) {
        // Local Variables
        int tabLength = 8;
        int pos = 1;
        int tp = 0;
        int c;


        // Get the characters
        while ((c = getchar()) != '.') {
                if(c == '\t'){
                        // Check at what position the tab is at
                        tp = tabLength - (pos - 1) % tabLength;
                        while (tp > 0) {
                                putchar('.');
                                ++pos;
                                --tp;
                        }
                }
                else if(c == '\n'){
                        putchar(c);
                        pos = 1;
                }
                else{
                        putchar(c);
                        ++pos;
                }
        }

        return 0;
}
