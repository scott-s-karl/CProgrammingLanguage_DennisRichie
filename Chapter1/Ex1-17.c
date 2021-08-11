#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getLine(char **s, int minLength){
        //variable
        int i,c,j;
        char *temp;
        for (i = 0; (c = getchar()) != '\n'; i++) {
                if(c == '\t'){
                        // To change what a pointer is pointing to change the value
                        --i;
                        continue;
                }
                //check if the lim has been reached
                if(i == minLength/2){

                        // create a temp pointer to hold the current chars
                        temp = (char *)calloc(i, sizeof *temp);

                        // Copy the values to temp
                        strncpy(temp, *s, i);

                        // double the length
                        minLength *=2;

                        // free the line
                        free(*s);

                        // allocate to the lines
                        *s = (char *)calloc(minLength, sizeof *s);

                        strncpy(*s, temp, i);

                        // free temp
                        free(temp);
                }
                (*s)[i] = c;
        }
        if(i == 0 && c == '\n'){
                return(0);
        }
        //remove trails
        for(j = i; j > 0; j--){
                if((*s)[j] >= 33 && (*s)[j] <= 126){
                        (*s)[j+1] = '\n';
                        (*s)[j+2] = '\0';
                        break;
                }
        }
        ++j;
        return(j);
}
char *reverse(char *s, int len){
        //variable defintion
        int i, j, temp;

        //Length of the current string without the null
        i = len;

        //Check for return char
        if(s[i] == '\n'){
                --i;
        }
        printf("%d\n", i);
        j = 0;
        while (j < i ) {
                temp = s[j];
                s[j] = s[i];
                s[i] = temp;

                //decrement i
                --i;

                //increment j
                ++j;
        }
}

int main(int argc, char const *argv[]) {
        // Define the line
        int len;
        int minLength = 10;
        char *line = (char *)calloc(minLength,sizeof *line);

        while((len = getLine(&line, minLength)) > 1){
                printf("%s\n", line);
                reverse(line, len);
                printf("%s\n", line);
                free(line);
                char *line = (char *)calloc(minLength,sizeof *line);

        }
        free(line);
        printf("Done\n");
        return 0;
}
