// Steven Karl
/* Description: Write a program to fold long input lines ager the last non blank
character that occurs before the nth column of the input, where n is a parameter.
Make sure to handle long lines and if there are no blanks or tabs before the
specified column
*/

// Imports
#include <stdio.h>
#include <stdlib.h>

int setPosition(int pos, char *line){
        for (int i = 0; i < pos+1; i++) {
                line[i] = '\0';
        }
        return(1);

}
// Function to find non blank
int findChar(int pos, char *line){

        // loop backwards until you find a char
        while(line[pos-1] != ' '){
                pos--;
        }
        return(pos);

}

//Function to print the chars
void printChars(int pos, char *line){
        //Loop and put the line in
        for(int i = 0; i < pos; i++){
                putchar(line[i]);
        }
        putchar('\n');
}


// Main Routine
int main(int argc, char const *argv[]) {
        // Locals
        int c;
        int pos = 1;
        int maxLine = 10;
        char *line = (char *)calloc(maxLine, sizeof(char));

        //Loop through chars
        while((c = getchar()) != '.'){
                // Set the value in the line
                line[pos-1] = c;
                pos++;
                // Check if your at the max length
                if (pos >= maxLine) {
                        for(int i = 0; i < pos; i++){
                                printf("%c\n",line[i]);
                        }
                        // Back track until the non blank
                        printf("Position at overflow: %d char is %c\n", pos, c);
                        pos = findChar(pos, line);
                        printf("Position after find blank: %d char is %c\n", pos,c);

                        // print the line
                        printChars(pos, line);

                        //set the position to the  next char
                        pos = setPosition(pos, line);
                        printf("Position After reset: %d char is %c\n", pos,c);

                } else if(c == '\n'){
                        // Put the char in the line
                        printChars(pos, line);
                }
        }
        free(line);
        return 0;
}
