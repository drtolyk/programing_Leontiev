#include "lib.h"
int find_nsd(int num1, int num2) {
    int nsd;
    while (num1 != num2) {
        if (num1 > num2) {
            num1 = num1 - num2;
        } else {
            num2 = num2 - num1;
        }
    }
    nsd = num1;
    return nsd;
}
