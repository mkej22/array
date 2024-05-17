#ifndef ARRAY_H
#define ARRAY_H

int findMaximumValue(const int array[], int SIZE);
int findMinimumValue(const int array[], int SIZE);
float calculateAverage(const int array[], int SIZE);
void saveArrayToFile(const int array[], int SIZE, const char *array.c);
void loadArrayFromFile(int array[], int SIZE, const char array.c);
int* enterValue(int *array, int *SIZE);
void printArray(const int array[], int SIZE);
int* deleteValues(int *array, int *SIZE);

#endif // ARRAY_H