/**
 * @file lib.c
 * @brief Файл з реалізацією функцій для роботи з текстом
 */
#include "lib.h"

void print_numbers(int numbers[], int count) {
    printf("Знайдені числа: ");
    for (int i = 0; i < count; i++) {
        int num = numbers[i];
        while (num > 0) {
            int digit = num % 10;
            printf("%d ", digit);
            num /= 10;
        }
    }
    printf("\n");
}

int is_digit(char c) {
    return (c >= '0' && c <= '9');
}
