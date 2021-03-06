// CECS 342 Lab 2
// Group 6: 
// Kevin Patel
// Kevin Vu
// Harry Tran
// Tymee Kong
// Jessica Wei
// Aaron Ramirez

#include <stdio.h> // standard i/o header file 
#include <stdlib.h> // standard library header file 
#include <string.h> // string header file 
#include "Person.h" // person header file 

#define NUM_PEOPLE 17 // constant number of people for reference 
#define TOTAL_NUMBERS 12 // constant number of digits for reference 

// initialize an array of floating point numbers
float numbers[] = {645.32, 37.40, 76.30, 5.40, -34.23, 1.11, -34.94, 23.37, 635.46, -876.22, 467.73, 62.26}; 

void SortFloatingNumbers(); // Sort floating numbers prototype 
void SortByName(); // Sort by name prototype 
void SortByAge(); // Sort by age prototype 

int compareFloat (const void * a, const void * b); // Compare floats prototype
int compareNames (const void* a, const void* b); // Compare names prototype 
int compareAge(const void*a, const void* b); // Compare age prototype 

void PrintFloatingArray(); // Print floating array prototype 
void PrintPeoplesArray(); // Print peoples array prototype 

int main(void) {

    SortFloatingNumbers(); // Sort floating numbers 
    PrintFloatingArray(); // Print floating array 

    SortByName(); // Sort people by name 
    printf("Sorted people by name: \n"); 
    PrintPeoplesArray(); // Print sorted people's array 

    SortByAge(); // Sort people by age 
    printf("Sorted people by age: \n"); 
    PrintPeoplesArray(); // Print sorted people's array 

    return 0; // terminate the program 
}

void SortByAge() {
    // Standard C library function (quicksort) for sorting people based on age
    qsort(people, NUM_PEOPLE, sizeof(Person), compareAge);  
}

void SortByName() {
    // Standard C library function (quicksort) for sorting people based on name 
    qsort(people, NUM_PEOPLE, sizeof(Person), compareNames);    
}

void PrintFloatingArray() {
    printf("Sorted numbers in ascending order: \n"); 
    // loop through and display all numbers in numbers array 
    for(int i = 0; i < TOTAL_NUMBERS; i++) {
        printf("%f \n", numbers[i]); 
    }
    printf("\n"); 
}

void PrintPeoplesArray() {
    for(int i = 0; i < NUM_PEOPLE; i++) {
        // loop through and print all people in peoples array 
        printf("%s, %i \n", people[i].name, people[i].age); 
    }
    printf("\n"); 
}

void SortFloatingNumbers() { 
    // Standard C library function (quicksort) for sorting float data
    qsort(numbers, TOTAL_NUMBERS, sizeof(float), compareFloat); 
}

int compareFloat(const void* a, const void* b) {
    // find the difference between both floating point values 
    float differenceBetweenFloats = *(float*)a - *(float*)b; 

    if(differenceBetweenFloats > 0) {
        return 1; // if the first floating value is greater than the second, return 1 
    } else if(differenceBetweenFloats < 0){
        return -1; // if the first floating value is lesser than the second, return -1
    } else {
        return 0; // if both floating values are the same, return 0
    }
    
}

int compareAge(const void* a, const void* b) { 

    Person *firstPerson = (Person*)a; // type cast first parameter as a pointer to a person data type 
    Person *secondPerson = (Person*)b; // type cast the second parameter as a pointer to a person data type

    if(firstPerson->age == secondPerson->age) {
        // if ages are the same, compare by names 
        return compareNames(firstPerson, secondPerson); 
    } 
    // else return the differece in age in descending order 
    return secondPerson->age - firstPerson->age; 
}

int compareNames (const void* a, const void* b) {

    Person *firstPerson = (Person*)a; // type cast first parameter as a pointer to a person data type 
    Person *secondPerson = (Person*)b; // type cast second parameter as a pointer to a person data type 

    return strcmp(firstPerson->name, secondPerson->name); // return the comparison among both strings 
}


    

