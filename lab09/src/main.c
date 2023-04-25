#include "lib.h"

int main() {
    srand((unsigned int)time(NULL)); // генератор випадкових чисел
    int num1 = 1 + rand() % 1000; // генеруемо число
    int num2 = 1 + rand() % 1000; // генеруемо число // Находим НОД заданных чисел
    int nsd = find_nsd(num1, num2); // виконання функції
    printf("Знаходження НСД заданих чисел %d %d\n", num1, num2); // Вивід результатів
    printf("НСД = %d\n", nsd);

    return 0;
}
