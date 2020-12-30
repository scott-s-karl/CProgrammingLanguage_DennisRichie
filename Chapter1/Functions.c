#include <stdio.h>

/*This is code that covers the basics of functiosn in C*/
int main(int argc, char const *argv[]) {
        int i;
        for (i = 0; i < 10; i++) {
                printf("%d %d %d\n",i, power(2,i),power(3,i));
        }
        return 0;
}
/* Define the function for calculating a number to a power */
power(x,n)
int x, n;
{
        int i,p;
        p = 1;
        for (i = 0; i < n; i++) {
                p = p * x;
        }
        return(p);
}
