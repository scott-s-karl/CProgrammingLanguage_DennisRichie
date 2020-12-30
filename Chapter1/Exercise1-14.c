#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

s[i] = *(s+i)
**s = pointer to a pointer
s is the value
*s is the pointer to the value
&line = s
line = *s
line[0] = **s

calloc(Size to allocate, Bytes per index)

strncpy(destinatiion, source, length)
*/

int getmaxline(char **s, int lim){
        // Local variable definition
        int c, i;
        char *tmp;

        // Loop through the characters in the current input line
        for (i = 0; (c = getchar()) != '\n'; ++i) {

                if(i == lim/2){
                        tmp = (char *)calloc(i, sizeof *tmp);
                        strncpy(tmp, *s, i);
                        // Reallocate  more space for the variable
                        //*s = (char *) realloc(*s, 2*lim);
                        lim *= 2;
                        free(*s);
                        *s = (char *)calloc(lim, sizeof **s);
                        strncpy(*s, tmp, i);
                        free(tmp);
                }
                (*s)[i] = c;
        }
        // Adding the new line char
        (*s)[i] = '\n';
        ++i;

        // Set the last index of the line to a \0 to indicate the end of the line
        //(*s)[i] = '\0';

        // Return the count of the word for comparison
        return(i);
}

char *copy(char *s1, char *s2){
        //Local variable definition
        int i;

        //Local variable initilization
        i = 0;

        // Loop through the values in the current longest line and
        // Replace the values in the temp longest line
        while(s1[i] != '\n'){
                s2[i] = s1[i];
                ++i;
        }

        // Return the temporary longest line
        return(s2);
}

int main(int argc, char const *argv[]) {

        // Define the variable to be used in the main function
        int len; // the length of the char arr
        int max; // this the temporary maximum length that has been seen thus far
        int minLength;
        minLength = 10;
        char *line = (char *)calloc(minLength, sizeof *line); // define the pointer to the first elemtn of the line and the memory space
        char *save = (char *)calloc(minLength, sizeof *save); // define the pointer to the first elelmtn and the memory space

        max = 0;

        while((len = getmaxline(&line, minLength)) > 1){
                if (len > max) {
                        max = len;
                        free(save);
                        save = (char *)calloc(len, sizeof *save);
                        //save = realloc(save, len);
                        copy(line, save);
                }
        }
        if (max > 0) {
                printf("%s\n",save);
        }
        free(line);
        free(save);

        return 0;
}
