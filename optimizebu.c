#include <stdio.h>
int main() {
    int numbers[] = {22, 12, 70, 15, 32};
    int n = 5; // Number of elements in the array
    int swapped; // Flag to check if any swaps were made
    for (int i = 0; i < n - 1; i++) {
        swapped = 0; // Initialize swapped to 0
        for (int j = 0; j < n - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                // Swap numbers[j] and numbers[j+1]
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
                swapped = 1; // Set swapped to 1 if a swap occurs
            }
        }
        if (swapped == 0)
            break;
    }
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    return 0;
}

