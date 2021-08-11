// Steven Karl
// Entab question

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {
        // Define the local variables
        int c;
        int tabLength = 8;
        bool flag = false;
        int count = 0;
        int tabCount;
        int spaceCount;

        // Get the input string
        while((c = getchar()) != '.'){
                if (c == ' ') {
                        flag = true;
                        count++;
                }
                else if (c != ' ' && flag == true) {

                        tabCount = floor((double) (count/tabLength));
                        spaceCount = count%tabLength;
                        while (tabCount > 0) {
                                putchar('\t');
                                tabCount--;
                        }

                        while(spaceCount > 0){
                                putchar(' ');
                                spaceCount--;

                        }
                        count = 0;
                        putchar(c);
                        flag = false;
                }
                else {
                        putchar(c);
                }

        }
        return 0;
}
