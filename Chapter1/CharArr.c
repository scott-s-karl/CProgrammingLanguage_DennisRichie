#include <stdio.h>
#define MAXLINE 1000

int getmaxline(char*, int);
char *copy(char*, char*);

int main(int argc, char const *argv[]) {
        //Define  variables
        int len;  // the current line length
        int max; //The maximum line length seen so far
        char line[MAXLINE]; // the current input line
        char save[MAXLINE]; // The longest line saved
        // Get the line
        max = 0;
        while ((len = getmaxline(line, MAXLINE)) > 0){
                if (len > max) {
                        max = len;
                        copy(line, save);
                }
        }
        if (max > 0) {
                printf("%s\n",save);
        }

        return 0;
}
//Get line function
int
getmaxline(char *s, int lim)
{
        int c, i;
        for (i = 0; i < lim-1 && (c = getchar()) != '.' && c != '\n'; ++i) {
                s[i] = c;
        }
        if (c == '\n') {
                s[i] = c;
                ++i;
        }
        s[i] = '\0';
        return(i);
}
//Copy function
char *
copy(char *s1, char *s2)
{
        int i;
        i = 0;
        while ((s2[i] = s1[i]) != '\0'){
                ++i;
        }
        return(s2);
}
