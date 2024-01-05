#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int inches;

typedef struct {
    char first_name[50];
    char last_name[50];
    int age;
} Student;

typedef struct {
    int data;
    int *array;
} Info;



int main() {

    // Student *s1;
    // s1 = calloc(1, sizeof(Student));
    // s1->age = 18;

    // printf("%d", s1->age);
    // free(s1);

    Info a;
    a.data = 3;
    a.array = malloc(sizeof(int) * 5);

    for(int i = 0; i < 5; i++) {
        a.array[i] = i + 1;
        printf("a.array[%d]: %d\n", i, a.array[i]);
    }

    Info b;
    b = a;

    for(int i = 0; i < 5; i++) {
        printf("b.array[%d]: %d\n", i, b.array[i]);
    }
    
    free(a.array);
    return 0;
}