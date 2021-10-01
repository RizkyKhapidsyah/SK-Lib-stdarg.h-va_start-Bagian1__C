#include <stdio.h>      
#include <stdarg.h>     
#include <conio.h>

/*
    Source by CPlusPlus
    Modified For Learn by RK
    I.D.E : VS2019
*/

void PrintFloats(int n, ...) {
    int i;
    double val;

    printf("Printing floats : ");
    va_list vl;
    va_start(vl, n);

    for (i = 0; i < n; i++) {
        val = va_arg(vl, double);
        printf(" [%.2f]", val);
    }

    va_end(vl);
    printf("\n");
}

int main() {
    PrintFloats(3, 3.14159, 2.71828, 1.41421);
    _getch();
    return 0;
}