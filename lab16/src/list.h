#include "entity.h"

#define INITIAL_CAPACITY 10

typedef struct {
    Watch* items;
    int size;
    int capacity;
} List;

void initList(List* list);

void freeList(List* list);

void addToList(List* list, const Watch* watch);

void removeFromList(List* list, int index);

void displayList(const List* list);
