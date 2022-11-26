#include <stdio.h>
#include <time.h>
#include <stdlib.h>
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

/*#include <stdio.h>
#include <stdlib.h>
int f1(int number[], int size) 
{
    int xxx=0;
    int aaa=0;
    for (; aaa < size; ++aaa) 
    {
        if (number[aaa] < number[aaa+1]) 
               {
                   xxx=xxx+1; 
               }
    }
    return xxx; 
}
int main()
{
    int number[]={13,2,5,11,19,8,97,11,13};
    int size=sizeof(number)/sizeof(int); 
    int xxx=f1(number,size); 
    printf("Кількість пар у яких перше число менше наступного = %d", xxx-1); 
    return 0; 
}
*/
