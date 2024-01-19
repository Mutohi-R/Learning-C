#include <stdio.h>
#include <stdbool.h>

int main () {

    int array[] = {7, 8, 3, 4, 5, 6, 8, 7, 9, 1};
    int length = 10;
    bool repeating = false;
    bool found_non_repeating = false;

    for (int i = 0; i < length; i++) { 
        repeating = false;
        for (int j = 0; j < length; j++) {
            if (array[i] == array[j] && i != j) {
                repeating = true;
                break;
            }
        }
        if (!repeating) {
            printf("first non-repeating element: %d\n", array[i]);
            found_non_repeating = true;
            break;
        }
    }

    if (!found_non_repeating) {
        printf("no non-repeating element found\n")
    }

    return 0;
}