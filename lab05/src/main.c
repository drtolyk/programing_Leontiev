/*#include <stdio.h>
int main()
{
        int aaa = 78;
        int bbb = 212;
        int nsd;
        printf("Знаходження НСД заданих чисел %d %d",aaa ,bbb);
        while (aaa != bbb)
                if (aaa > bbb)
                        aaa = aaa - bbb;
                else
                        bbb = bbb - aaa;
        nsd = aaa;
        printf("\n НСД=%d\n", nsd);
        return 0;
}*/

/*#include <stdio.h>
int main()
{
	int aaa = 78;
	int bbb = 212;
	int nsd;
	printf("Знаходження НСД заданих чисел  %d %d", aaa, bbb);
	do if (aaa > bbb)
		aaa = aaa - bbb;
	else
		bbb = bbb - aaa;
	while (aaa != bbb)
		;
	nsd = aaa;
	printf("\n НСД=%d\n", nsd);
	return 0;
}
*/
#include <stdio.h>
int main()
{
        int aaa = 78;
        int bbb = 212;
        int nsd;
        printf("Знаходження НСД заданих чисел %d %d",aaa ,bbb);
        for (;aaa!=bbb;)
                if (aaa > bbb)
                        aaa = aaa - bbb;
                else
                        bbb = bbb - aaa;
        nsd = aaa;
        printf("\n НСД=%d\n", nsd);
        return 0;
}
