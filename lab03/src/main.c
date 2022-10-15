// Розрахунок суми чисел з дiапазону вiд 1 до 51
#include <stdio.h>
int main()
{
	int first = 1;
	int last = 51;
	int sum = 0;
	printf("\nСумма чисел от %d до %d:", first, last);
	while (first <= last) {
		sum = sum + first;
		first++;
	}
	printf("\n  Сумма=%d \n", sum);
	return 0;
}
