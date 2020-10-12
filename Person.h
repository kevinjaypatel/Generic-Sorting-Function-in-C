#ifndef PERSON_H // include guard 
#define PERSON_H // include guard 

typedef struct {
    int age; // age of a person  
    char name[15]; // name of a person as a string 
} Person; 

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

#endif // end of include guard: PERSON_H 