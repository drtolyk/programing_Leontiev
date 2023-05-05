/**
 * @file main.c
 * @brief Головний файл програми.
 *
 * Цей файл містить виклик функцій для додавання двох матриць.
 * Користувач може ввести кількість рядків та стовпців матриць,
 * а також їх елементи, і отримати результат додавання.
 */
#include "lib.h"
#define MAX_ROWS 10
#define MAX_COLS 10
/**
 * @brief Головна функція програми.
 *
 * Функція запускає програму та викликає функції для додавання двох матриць.
 * Користувач вводить кількість рядків та стовпців матриць, а також їх елементи.
 * Результат додавання виводиться на екран.
 *
 * @return 0 при успішному виконанні програми.
 */
int main() {
    printf("Виконав: Леонтьєв Анатолій 922В\n");
    printf("Лабораторна №12\n");
    printf("Тема лабораторної: Додавання двох матриць\n");

    int rows, cols;
    printf("Введіть кількість рядків: ");
    scanf("%d", &rows);
    printf("Введіть кількість стовпців: ");
    scanf("%d", &cols);

    double matrix1[rows][cols], matrix2[rows][cols], result[rows][cols];

    printf("Введіть елементи першої матриці:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%lf", &matrix1[i][j]);
        }
    }

    printf("Введіть елементи другої матриці:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%lf", &matrix2[i][j]);
        }
    }

    add_matrices(rows, cols, matrix1, matrix2, result);

    printf("Сума матриць дорівнює:\n");
    for (int i = 0; i < rows; i++) {
        printf("[ ");
        for (int j = 0; j < cols; j++) {
            printf("%7.2f ", result[i][j]);
        }
        printf("]\n");
    }

    return 0;
}
