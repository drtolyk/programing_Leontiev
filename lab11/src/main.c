#include "lib.h"

#define N 3

int main() {
    int matrix[N][N] = {{3, 2, 1},
                        {5, 2, 6},
                        {6, 7, 9}};
    int diagonal[N];

    get_diagonal(&matrix[0][0], N, diagonal);
    sort_array(diagonal, N);

    printf("Сортування елементів головної діагоналі за зростанням:\n"); 
    for (int i = 0; i < N; i++) {
        printf("%d ", diagonal[i]);  // Було додано для перевірки
    }
    printf("\n"); 

    return 0;
}
