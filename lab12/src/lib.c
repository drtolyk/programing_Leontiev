/**
 * @file lib.c
 * @brief Функції для додавання двох матриць
 */

#include "lib.h"

/**
 * @brief Додає дві матриці однакового розміру.
 *
 * @param rows кількість рядків у матрицях
 * @param cols кількість стовпців у матрицях
 * @param matrix1 перша матриця
 * @param matrix2 друга матриця
 * @param result матриця-результат додавання
 */
void add_matrices(int rows, int cols, double matrix1[][cols], double matrix2[][cols], double result[][cols]) {
for (int i = 0; i < rows; i++) {
for (int j = 0; j < cols; j++) {
result[i][j] = matrix1[i][j] + matrix2[i][j];}}
}

