#include "array.h"
#include <stdio.h>
#include <stdlib.h>

int findMaximumValue(const int array[], int SIZE) {
    int max = array[0];
    for (int i = 1; i < SIZE; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

int findMinimumValue(const int array[], int SIZE) {
    int min = array[0];
    for (int i = 1; i < SIZE; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

float calculateAverage(const int array[], int SIZE) {
    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += array[i];
    }
    return (float)sum / SIZE;
}

void saveArrayToFile(const int array[], int SIZE, const char *filename) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }
    for (int i = 0; i < SIZE; i++) {
        fprintf(file, "%d\n", array[i]);
    }
    fclose(file);
}

void loadArrayFromFile(int array[], int SIZE, const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return;
    }
    for (int i = 0; i <
