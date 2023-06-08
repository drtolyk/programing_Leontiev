#include "entity.h"


void createWatch(Watch* watch, int isWaterproof, const char* model, float price, const char* manufacturerName, const char* manufacturerCountry, const char* style) {
    watch->isWaterproof = isWaterproof;
    strcpy(watch->model, model);
    watch->price = price;
    strcpy(watch->manufacturer.name, manufacturerName);
    strcpy(watch->manufacturer.country, manufacturerCountry);
    strcpy(watch->style, style);
}

void destroyWatch(Watch* watch) {
    
}

void displayWatch(const Watch* watch) {
    printf("Модель: %s\n", watch->model);
    printf("Ціна: %.2f USD\n", watch->price);
    printf("Виробник: %s (%s)\n", watch->manufacturer.name, watch->manufacturer.country);
    printf("Стиль: %s\n", watch->style);
    printf("Водонепроникність: %s\n", watch->isWaterproof ? "так" : "ні");
    printf("----------------------------------\n");
}
