#include <stdio.h> // 26 задание

int main()
{
	int aaa[3][3] = { { 1, 2, 3 }, { 2, 2, 0 }, { 3, 4, 5 } };
	printf("Дана матрица А, найти А^2\n");
	int ccc[3][3];
	ccc[0][0] = aaa[0][0] * aaa[0][0] + aaa[0][1] * aaa[1][0] + aaa[0][2] * aaa[2][0];
	ccc[0][1] = aaa[0][0] * aaa[0][1] + aaa[0][1] * aaa[1][1] + aaa[0][2] * aaa[2][1];
	ccc[0][2] = aaa[0][0] * aaa[0][2] + aaa[0][1] * aaa[1][2] + aaa[0][2] * aaa[2][2];
	ccc[1][0] = aaa[1][0] * aaa[0][0] + aaa[1][1] * aaa[1][0] + aaa[1][2] * aaa[2][0];
	ccc[1][1] = aaa[1][0] * aaa[0][1] + aaa[1][1] * aaa[1][1] + aaa[1][2] * aaa[2][1];
	ccc[1][2] = aaa[1][0] * aaa[0][2] + aaa[1][1] * aaa[1][2] + aaa[1][2] * aaa[2][2];
	ccc[2][0] = aaa[2][0] * aaa[0][0] + aaa[2][1] * aaa[1][0] + aaa[2][2] * aaa[2][0];
	ccc[2][1] = aaa[2][0] * aaa[0][1] + aaa[2][1] * aaa[1][1] + aaa[2][2] * aaa[2][1];
	ccc[2][2] = aaa[2][0] * aaa[0][2] + aaa[2][1] * aaa[1][2] + aaa[2][2] * aaa[2][2];
	printf("Матрица А^2= \n |%d %d %d| \n |%d %d %d| \n |%d %d %d| \n", ccc[0][0], ccc[0][1], ccc[0][2], ccc[1][0], ccc[1][1], ccc[1][2], ccc[2][0],
	       ccc[2][1], ccc[2][2]);
	return 0;
}
