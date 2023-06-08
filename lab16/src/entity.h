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

void createWatch(Watch* watch, int isWaterproof, const char* model, float price, const char* manufacturerName, const char* manufacturerCountry, const char* style);

void destroyWatch(Watch* watch);

void displayWatch(const Watch* watch);
