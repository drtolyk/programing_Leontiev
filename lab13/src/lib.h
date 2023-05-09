/**
 * @file lib.h
 * @brief Файл з описом функцій для роботи з текстом
 */
#include <stdio.h>
#include <string.h>

/**
 * @brief Функція, яка знаходить всі числа у тексті та виводить кожну цифру окремо
 * 
 * @param numbers масив чисел, які знайдено у тексті
 * @param count кількість знайдених чисел
 */
void print_numbers(int numbers[], int count);

/**
 * @brief Функція, яка перевіряє, чи є символ цифрою
 * 
 * @param c символ для перевірки
 * @return int повертає 1 якщо символ - цифра, 0 - якщо ні
 */
int is_digit(char c);
