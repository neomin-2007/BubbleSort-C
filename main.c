#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int * sort(int * array, int length) {

    for (int POS = 0; POS < length; POS++) {
        int swapped = 0;

        for (int index = 0; index < length-1; index++) {
            int later = array[index];
            int next = array[index + 1];

            if (later > next) {
                array[index] = next;
                array[index + 1] = later;
                swapped = 1;
            }
        }

        if (swapped == 0) break;
    }
    
    
    return array;
}

int main() {
    int array[] = {8, 2, 3, 4, 1, 6, 9};
    int * sortedArray = malloc(7 * sizeof(int));

    sortedArray = array;
    sort(sortedArray, 7);

    printf("\nSorted Array: ");
    for (int i = 0; i < 7; i++) {
        printf("%i, ", sortedArray[i]);
    }
}