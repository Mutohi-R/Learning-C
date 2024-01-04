#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
    
int main() {

    printf("%d \n", add(1, 2));
    printf("%d \n", sub(1, 2));
    printf("%d \n", mul(1, 2));

    return 0;
}

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}