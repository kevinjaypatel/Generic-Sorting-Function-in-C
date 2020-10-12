#ifndef PERSON_H
#define PERSON_H


typedef struct {
    int age; 
    char name[15]; 
} Person; 

int compareNames (const void* a, const void* b); 
int compareAge(const void*a, const void* b); 

#endif /* end of include guard: PERSON_H */