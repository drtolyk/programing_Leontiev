#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    char country[50];
} Manufacturer;

typedef struct {
    int isWaterproof;
    char model[50];
    float price;
    Manufacturer manufacturer;
    char style[20];
} Watch;

void readDataFromFile(char* fileName, Watch** watches, int* numWatches);
void writeDataToFile(char* fileName, Watch* watches, int numWatches);
void displayWatches(Watch* watches, int numWatches);
void findWatchesByPrice(Watch* watches, int numWatches, float maxPrice);
void findSkeletonWatches(Watch* watches, int numWatches);
void findClassicStyleWatches(Watch* watches, int numWatches);
