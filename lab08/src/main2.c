/**
	@file main2.c Визначення кількості пар у яких перше число менше наступного
	@author Leontiev Anatoliy
**/
#include <stdio.h>
#include <stdlib.h>
/**
	*Визначення кількості пар які виконують умову
	@param number заданий масив
	@param size розмір масиву
	@param aaa перше число масиву
	@param xxx змінна для виведення результату
**/
int fun(int number[], int size)        //Функція 
{
    int xxx=0;                         //змінна для виведення результату
    int aaa=0;                         //змінна для розрахунку
    for (; aaa < size; aaa++)          //виконання циклу для розрахунку к-сті пар
    {
        if (  number[aaa+1] > number[aaa])    // Якщо друге число більше першого, додаємо до результату 1
               {
                   xxx++; 
               }
    }
    return xxx;                 // Повертаємо значення ххх
}
/**
	*Задання змінних
	@param number заданий масив
	@param size розмір масиву
	@param xxx змінна для виведення результату
**/
int main() 
{
    int number[]={13,2,5,11,19,8,97,11,13};   // Задаємо перелік чисел
    printf("\nВизначити кількість пар, у яких перше число менше наступного, серед заданих чисел %d %d %d %d %d %d %d %d %d\n",number[0],number[1],number[2],number[3],number[4],number[5],number[6],number[7],number[8]);
    int size=sizeof(number)/sizeof(int);      //Визначення розміру масиву
    int xxx=fun(number,size);                 //Беремо значення ххх з функції
    printf("Кількість пар, у яких перше число менше наступного = %d", xxx-1);   Вивід результату
    return 0; 
}
