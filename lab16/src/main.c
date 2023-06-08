#include "list.h"

int main() {
    List watchList;
    initList(&watchList);

    createWatch(&watchList.items[0], 1, "Model 1", 100.0, "Manufacturer 1", "Country 1", "Style 1");
    createWatch(&watchList.items[1], 0, "Model 2", 200.0, "Manufacturer 2", "Country 2", "Style 2");
    createWatch(&watchList.items[2], 1, "Model 3", 300.0, "Manufacturer 3", "Country 3", "Style 3");

    displayList(&watchList);
    printf("\n");

    createWatch(&watchList.items[3], 1, "Model 4", 400.0, "Manufacturer 4", "Country 4", "Style 4");
    addToList(&watchList, &watchList.items[3]);

    displayList(&watchList);
    printf("\n");

    removeFromList(&watchList, 1);

    displayList(&watchList);
    printf("\n");

    freeList(&watchList);

    return 0;
}
