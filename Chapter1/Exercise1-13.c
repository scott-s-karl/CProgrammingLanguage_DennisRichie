#include <stdio.h>

//This is a program that will convert a input from upper to lower case


lower(c)
int c;
{
        // Check if the input is a capital letter
        if (c >= 'A' && c <= 'Z') {
                // Return the lower case version of the letter
                return(c - 'A' + 'a');
        } else {
                //Return the letter
                return(c);
        }
}
int main(int argc, char const *argv[]) {
        int c;
        // Loop through the user input chars until a . is seen since its not a real file
        while ((c = getchar()) != '.') {
                //Put the cahr on the screen from the result of the lower function.
                putchar(lower(c));
        }
        return 0;
}
