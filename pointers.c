#include <stdio.h>

int main() {

    int g = 9;
    int *p = &g;
    p++;
    // printf("%p\n", p);
    // printf("%d", *p);

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int* arrPtr;
    arrPtr = &arr[0];

    for(int i = 0; i < 10; i++) {
        *arrPtr = 3;
        arrPtr++;
    }

    for(int i = 0; i < 10; i++) {
        printf("%d\n", arrPtr[i]);
    }

    // printf("%p", arrPtr);


    return 0;
}