// Steven Karl
// Date - 12 - 20 - 2020
/* This program is for taking user input in the form of sentences/ char arrays
and returning the longest one to the screen
*/
//-----------------------------------------------------------------------------

// Inludes
//stdio - Prints/getchar/free/calloc
#include <stdio.h>
#include <stdlib.h>

// string - strncopy
#include <string.h>

int getLine(char **s, int lim){

        // Define the local variables
        int c;
        int i, j;

        char *tmp;

        // loop through the characters
        for (i = 0; (c = getchar()) != '\n'; ++i) {
                // To change a value of a pointer
                // s[i] = c === *(s + i) = c
                // Check if the char is a tab or a trailing space
                if(c == '\t'){
                        // To change what a pointer is pointing to change the value
                        --i;
                        continue;
                }

                // Check the value of i vs length of memory
                if(i == lim/2){
                        // create storage array
                        tmp = (char *)calloc(i, sizeof *tmp);

                        // Copy s into tmp
                        strncpy(tmp, *s, i);

                        // Free and reallocate s with new lim
                        lim *=2;
                        free(*s);
                        *s = (char *)calloc(lim, sizeof *s);

                        // Copy tmp back to the new s
                        strncpy(*s, tmp, i);

                        //Free temp
                        free(tmp);

                }
                // To change what a pointer is pointing to change the value
                (*s)[i] = c;
        }
        if(i == 0 && c == '\n'){
                return(0);
        }

        // Check
        for (j = i; j > 0; j--) {
                /* code */
                if((*s)[j] >= 33 && (*s)[j] <= 126){
                        (*s)[j+1] = '\n';
                        (*s)[j+2] = '\0';
                        break;
                }
        }
        ++j;
        return(j);
}

char *copy(char *s1, char *s2){

        // Variables
        int i = 0;
        while(s1[i] != '\n'){
                s2[i] = s1[i];
                ++i;
        }
        // R
        return(s2);
}

int main(int argc, char const *argv[]) {

        // Variable Definition
        int minLength = 10;
        int max = 0;
        int len = 0;
        char *line = (char *)calloc(minLength, sizeof *line);
        char *save = (char *)calloc(minLength, sizeof *save);

        // Loop through the lines as long as bigger then a return char
        while((len = getLine(&line,minLength)) > 1){
                // Check the length of the line
                if (len > max) {
                        // Set max to length
                        max = len;
                        // free save
                        free(save);
                        // reallocate to save
                        save = (char *)calloc(max, sizeof *save);

                        // Copy to other
                        copy(line, save);
                }
        }
        // Print out the longest string
        printf("%s\n", save);
        printf("%d\n", max);

        // free the memory for the 2 char arrays that you made
        free(line);
        free(save);
        return 0;
}
