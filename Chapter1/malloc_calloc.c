#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[]) {
        //Malloc() allocated the memory for 5 integers
        // containing garbage values
        int *arr1 = (int *)malloc(5 * sizeof(int));

        // Deallocates the memory
        free(arr1);

        //calloc() allocates the memory of 5 intergers and
        // sets 0 to all of them
        int *arr2 = (int *)calloc(5, sizeof(int));

        //deallocates the memory
        free(arr2);

        return 0;
}
