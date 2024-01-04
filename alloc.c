#include <stdio.h>
#include <stdlib.h>

int main() {

    int *numbers;
    int size = 2, input = 0, i = 0;
    numbers = malloc( sizeof(int) * size); 

    do {

        if (i == size){
            size += 2;
            numbers = realloc(numbers, sizeof(int) * size);
        }

        printf("Enter (-1 to q) \n");
        scanf("%d", &input);

        if (input != -1) {
            numbers[i] = input;
            i++;
        }
    } while (input != -1);

    int num_elements = i;
    int total = 0;

    for (int count = 0; count < num_elements; count++) {
        total += numbers[count];
    }
    printf("i: %d\n", i);
    printf("total %d\n: ", total);

    printf("average is: %d\n", total / num_elements);

    free(numbers);

    return 0;
}