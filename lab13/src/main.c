/**
 * @file main.c
 * @brief Основний файл з головною функцією
 */

#include "lib.h"

#define BUFFER_SIZE 1000

int main() {
    char buffer[BUFFER_SIZE];
    int numbers[BUFFER_SIZE];
    int count = 0;

    // Відкриваємо файл зі вхідним текстом
    FILE *input_file = fopen("/home/anatoly/programing_Leontiev/lab13/assets/input.txt", "r");
    if (input_file == NULL) {
        printf("Помилка відкриття файлу!\n");
        return 1;
    }

    // Зчитуємо текст з файлу
    while (fgets(buffer, BUFFER_SIZE, input_file) != NULL) {
        // Перебираємо символи в рядку
        int len = strlen(buffer);
        for (int i = 0; i < len; i++) {
            char c = buffer[i];

            // Якщо символ - цифра, додаємо її до масиву чисел
            if (is_digit(c)) {
                int num = c - '0';
                numbers[count++] = num;
            }
        }
    }

    // Закриваємо файл
    fclose(input_file);

    // Виводимо кожну цифру окремо
    print_numbers(numbers, count);

    return 0;
}
