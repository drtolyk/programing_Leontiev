#include "lib.h"

void readDataFromFile(char* fileName, Watch** watches, int* numWatches) {
    FILE* file = fopen(fileName, "r");
    if (file == NULL) {
        printf("Помилка при відкритті файлу\n");
        exit(1);
    }

    fscanf(file, "%d", numWatches);

    *watches = (Watch*)malloc((*numWatches) * sizeof(Watch));

    for (int i = 0; i < *numWatches; i++) {
        fscanf(file, "%d", &(*watches)[i].isWaterproof);
        fscanf(file, "%s", (*watches)[i].model);
        fscanf(file, "%f", &(*watches)[i].price);
        fscanf(file, "%s", (*watches)[i].manufacturer.name);
        fscanf(file, "%s", (*watches)[i].manufacturer.country);
        fscanf(file, "%s", (*watches)[i].style);
    }

    fclose(file);
}

void writeDataToFile(char* fileName, Watch* watches, int numWatches) {
    FILE* file = fopen(fileName, "w");
    if (file == NULL) {
        printf("Помилка при відкритті файлу\n");
        exit(1);
    }

    fprintf(file, "%d\n", numWatches);

    for (int i = 0; i < numWatches; i++) {
        fprintf(file, "%d ", watches[i].isWaterproof);
        fprintf(file, "%s ", watches[i].model);
        fprintf(file, "%.2f ", watches[i].price);
        fprintf(file, "%s ", watches[i].manufacturer.name);
        fprintf(file, "%s ", watches[i].manufacturer.country);
        fprintf(file, "%s\n", watches[i].style);
    }

    fclose(file);
}

void displayWatches(Watch* watches, int numWatches) {
    printf("Годинники:\n");
    for (int i = 0; i < numWatches; i++) {
        printf("Модель: %s\n", watches[i].model);
        printf("Ціна: %.2f USD\n", watches[i].price);
        printf("Виробник: %s (%s)\n", watches[i].manufacturer.name, watches[i].manufacturer.country);
        printf("Стиль: %s\n", watches[i].style);
        printf("Водонепроникність: %s\n", watches[i].isWaterproof ? "так" : "ні");
        printf("----------------------------------\n");
    }
}

void findWatchesByPrice(Watch* watches, int numWatches, float maxPrice) {
    printf("Годинники з ціною менше %.2f USD:\n", maxPrice);
    for (int i = 0; i < numWatches; i++) {
        if (watches[i].price < maxPrice) {
            printf("Модель: %s\n", watches[i].model);
            printf("Ціна: %.2f USD\n", watches[i].price);
            printf("----------------------------------\n");
        }
    }
}

void findSkeletonWatches(Watch* watches, int numWatches) {
    printf("Швейцарські годинники зі скелетоном:\n");
    for (int i = 0; i < numWatches; i++) {
        if (watches[i].isWaterproof && strcmp(watches[i].manufacturer.country, "Швейцарія") == 0) {
            printf("Модель: %s\n", watches[i].model);
            printf("Ціна: %.2f USD\n", watches[i].price);
            printf("----------------------------------\n");
        }
    }
}

void findClassicStyleWatches(Watch* watches, int numWatches) {
    printf("Годинники стилю \"Класика\":\n");
    for (int i = 0; i < numWatches; i++) {
        if (strcmp(watches[i].style, "класика") == 0) {
            printf("Модель: %s\n", watches[i].model);
            printf("Ціна: %.2f USD\n", watches[i].price);
            printf("----------------------------------\n");
        }
    }
}
