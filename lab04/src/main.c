#include <stdio.h>
int main () {
char *text= "v";
        const int radius = 13;
        const float pii = 3.14;
        printf("Визначення площi довжини та об`эму за заданим радiусом r=%d\n, для цього введiть s, l або v", radius);
        if (text == "s" )
{
        float plosha = pii * radius * radius;
        printf("S=%f", plosha); }
        else if (text == "l" )
{
        float dlina = 2 * pii * radius;
        printf("L=%f", dlina); }
        else if (text == "v" )
{
        float obem = 4.0 / 3.0 * pii * (radius * radius * radius);
        printf("V=%f ", obem); }
        else printf ("Помилка вводу");
	return 0;
}
