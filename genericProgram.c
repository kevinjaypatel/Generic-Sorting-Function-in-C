// standard I/O header file 
#include <stdio.h>
// standard library header file 
#include <stdlib.h>
// standard string header file
#include <string.h>

// constant number of people for reference 
#define NUM_PEOPLE 17
// constant number of floating digits for reference 
#define TOTAL_NUMBERS 12 

typedef struct {
    int age; 
    char name[15]; 
} Person; 


// initialize an array of floating point numbers
float numbers[] = {645.32, 37.40, 76.30, 5.40, -34.23, 1.11, -34.94, 23.37, 635.46, -876.22, 467.73, 62.26}; 
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

void SortFloatingNumbers(); 
void SortByName(); 
void SortByAge(); 

void PrintFloatingArray(); 
void PrintPeoplesArray(); 

int compareFloat (const void * a, const void * b); 
int compareNames (const void* a, const void* b); 
int compareAge(const void*a, const void* b); 

int main(void) {

    // SortFloatingNumbers(); 
    // SortByName(); 
    SortByAge(); 
    
    // terminate program 
    return 0; 
}

void SortByAge() {

    printf("Before sorting the list: \n"); 
    PrintPeoplesArray(); 

    qsort(people, NUM_PEOPLE, sizeof(Person), compareAge); 

    printf("\nAfter sorting the peoples list is: \n"); 
    PrintPeoplesArray(); 
}

void PrintFloatingArray() {
    for(int i = 0; i < TOTAL_NUMBERS; i++){
        printf( "Number: %f\n", numbers[i]); 
    }
}

void PrintPeoplesArray() {
    for(int i = 0; i < NUM_PEOPLE; i++) {
        printf("Name: %s, Age: %d\n", people[i].name, people[i].age); 
    }
}

void SortFloatingNumbers() {

    printf("Before sorting the list: \n");
    PrintFloatingArray(); 

    qsort(numbers, TOTAL_NUMBERS, sizeof(float), compareFloat); 

    printf("\nAfter sorting the float list is: \n"); 
    PrintFloatingArray(); 
}

void SortByName() {

    printf("Before sorting the names: \n"); 
    PrintPeoplesArray(); 

    qsort(people, NUM_PEOPLE, sizeof(Person), compareNames); 
    
    printf("\nAfter sorting the names: \n"); 
    PrintPeoplesArray(); 
}

int compareNames (const void* a, const void* b) {

    Person *firstPerson = (Person*)a; 
    Person *secondPerson = (Person*)b;

    return strcmp(firstPerson->name, secondPerson->name);  
}

int compareFloat(const void* a, const void* b) {
    return  *(float*)a - *(float*)b;
}

int compareAge(const void* a, const void* b) { 

    Person *firstPerson = (Person*)a; 
    Person *secondPerson = (Person*)b; 

    if(firstPerson->age == secondPerson->age) {
        return compareNames(firstPerson, secondPerson); 
    } 
    return firstPerson->age - secondPerson->age; 
}
    

