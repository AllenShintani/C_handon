#include <stdio.h>
#include <stdlib.h>

double x = 1.0, y = 2.0;

void swap(double *x, double *y) {
    double temp = *x;
    *x = *y;
    *y = temp;
}


int main()
{


    swap(&x, &y);

    printf("x = %lf, y = %lf\n", x, y);
    return 0;
}