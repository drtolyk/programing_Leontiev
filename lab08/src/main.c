/**
	@file main.c Визначити НСД
	@author Leontiev Anatoliy
**/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
	*Розрахунок НСД
	@param aaa Перше число
	@param bbb Друге число
**/
int n1(int aaa,int bbb){
int nsd;
while (aaa != bbb)
                if (aaa > bbb)
                        aaa = aaa - bbb;
                else
                        bbb = bbb - aaa;
        nsd = aaa;
        return nsd;
}

/**
	*Оголошуємо змінні
	@param aaa Перше число
	@param bbb Друге число
	@param nsd Результат НСД
**/
int main()
{
        srand(time(NULL));
        int aaa=1+rand()%1000;
        int bbb=1+rand()%1000;
        int nsd = n1(aaa,bbb);
        printf("Знаходження НСД заданих чисел %d %d",aaa ,bbb);
        printf("\n НСД=%d\n", nsd); 
        return 0;
}
