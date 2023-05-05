#include "lib.h"

/**
 * Функція get_diagonal записує елементи головної діагоналі матриці n * n у одновимірний масив diagonal.
 *
 * @param matrix  вхідна матриця n * n
 * @param n       розмір матриці
 * @param diagonal вихідний масив, в який записуються елементи головної діагоналі
 */
void get_diagonal(int *matrix, int n, int *diagonal) {
    for (int i = 0; i < n; i++) {
        diagonal[i] = *(matrix + i * n + i);
    }
}

/**
 * Функція sort_array() сортує масив array довжиною n за зростанням.
 *
 * @param array вхідний масив
 * @param n     розмір масиву
 */
void sort_array(int *array, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (*(array + i) > *(array + j)) {
                int temp = *(array + i);
                *(array + i) = *(array + j);
                *(array + j) = temp;
            }
        }
    }
}
