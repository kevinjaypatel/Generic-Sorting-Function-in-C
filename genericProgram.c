// standard I/O header file 
#include <stdio.h>
// standard library header file 
#include <stdlib.h>

// constant number of people for reference 
#define NUM_PEOPLE 17
// constant number of floating digits for reference 
#define TOTAL_NUMBERS 12 

typedef struct {
    int age; 
    char name[15]; 
} Person; 

int main(void) {

    // initialize an array of persons (aka people)
    Person people[] = {
        { 20, "Hal" }, 
        { 31, "Susann" }, 
        { 19, "Dwight" }, 
        { 21, "Kassandra" }, 
        { 25, "Lawrence" },
        { 22, "Cindy" }, 
        { 27, "Cory" }, 
        { 19, "Mac" }, 
        { 27, "Romana" }, 
        { 32, "Doretha" }, 
        { 20, "Danna" }, 
        { 23, "Zara" }, 
        { 26, "Rosalyn" }, 
        { 24, "Risa" }, 
        { 28, "Benny" }, 
        { 33, "Juan" }, 
        { 25, "Natalie" }
    }; 

    // initialize an array of floating point numbers
    float numbers[] = {645.32, 37.40, 76.30, 5.40, -34.23, 1.11, -34.94, 23.37, 635.46, -876.22, 467.73, 62.26}; 

    for(int i = 0; i < NUM_PEOPLE; i++){
        printf( "Name: %s, Age: %d\n", people[i].name, people[i].age); 
    }

    for(int i = 0; i < TOTAL_NUMBERS; i++){
        printf( "Number: %f\n", numbers[i]); 
    }
 
    // terminate program 
    return 0; 
}