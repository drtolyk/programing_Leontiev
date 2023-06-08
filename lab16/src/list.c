#include "list.h"

void initList(List* list) {
    list->size = 0;
    list->capacity = INITIAL_CAPACITY;
    list->items = (Watch*)malloc(list->capacity * sizeof(Watch));
}

void freeList(List* list) {
    free(list->items);
}

void addToList(List* list, const Watch* watch) {
    if (list->size >= list->capacity) {
        list->capacity *= 2;
        list->items = (Watch*)realloc(list->items, list->capacity * sizeof(Watch));
    }

    list->items[list->size++] = *watch;
}

void removeFromList(List* list, int index) {
    if (index < 0 || index >= list->size) {
        printf("Недопустимий індекс\n");
        return;
    }

    for (int i = index; i < list->size - 1; i++) {
        list->items[i] = list->items[i + 1];
    }

    list->size--;
}

void displayList(const List* list) {
    printf("Годинники:\n");

    for (int i = 0; i < list->size; i++) {
        displayWatch(&list->items[i]);
    }
}
