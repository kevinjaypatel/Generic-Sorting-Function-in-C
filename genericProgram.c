// standard I/O header file 
#include <stdio.h>
// standard library header file 
#include <stdlib.h>

struct person {
    int age; 
    // char* name; 
}; 

int main(void) {

    // initialize an array of persons (aka people)
    struct person people[17] = {
        [0] = { 20 }, 
        [1] = { 31 }, 
        [2] = { 19 }, 
        [3] = { 21 }, 
        [4] = { 25 },
        [5] = { 22 }, 
        [6] = { 27 }, 
        [7] = { 19 }, 
        [8] = { 27 }, 
        [9] = { 32 }, 
        [10] = { 20 }, 
        [11] = { 23 }, 
        [12] = { 26 }, 
        [13] = { 24 }, 
        [14] = { 28 }, 
        [15] = { 33 }, 
        [16] = { 25 }
    }; 
 
    // terminate program 
    return 0; 
}