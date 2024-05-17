#include <stdio.h>
#include <stdlib.h>
#include "array.h"

void menu() {
    printf("1- Input Values\n");
    printf("2- Delete Values\n");
    printf("3- Print Array\n");
    printf("4- Find Maximum Value\n");
    printf("5- Find Minimum Value\n");
    printf("6- Calculate Average\n");
    printf("7- Save Array to File\n");
    printf("8- Read Array from File\n");
    printf("9- Stop Program\n");
}

int main() {
    int *array = NULL;
    int option = 0;
    int SIZE = 0;
    while (option != 9) {
        menu();
        printf("choice = ");
        scanf("%d", &option);
        switch (option) {
            case 1:
                array = enterValue(array, &SIZE);
                break;
            case 2:
                array = deleteValues(array, &SIZE);
                break;
            case 3:
                printArray(array, SIZE);
                break;
            case 4:
                if (SIZE > 0) {
                    int max = findMaximumValue(array, SIZE);
                    printf("Maximum value = %d\n", max);
                } else {
                    printf("Array is empty.\n");
                }
                break;
            case 5:
                if (SIZE > 0) {
                    int min = findMinimumValue(array, SIZE);
                    printf("Minimum value = %d\n", min);
                } else {
                    printf("Array is empty.\n");
                }
                break;
            case 6:
                if (SIZE > 0) {
                    float avg = calculateAverage(array, SIZE);
                    printf("Average value = %.2f\n", avg);
                } else {
                    printf("Array is empty.\n");
                }
                break;
            case 7:
                if (SIZE > 0) {
                    saveArrayToFile(array, SIZE, "array.txt");
                    printf("Array saved to file.\n");
                } else {
                    printf("Array is empty. Nothing to save.\n");
                }
                break;
            case 8:
                loadArrayFromFile(array, SIZE, "array.txt");
                printf("Array loaded from file.\n");
                break;
            case 9:
                break;
            default:
                printf("Invalid option.\n");
                break;
        }
    }
    free(array);
    return 0;
}
