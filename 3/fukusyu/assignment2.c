#include <stdio.h>

/*ポインタ値をprintfで表示する際の支持は%p*/
int swap(double *x, double *y){
    double z = *x;
    *x = *y;
    *y = z;
    return 0;
}

int main(){
    double x = 1.0, y = 2.0;
    swap(&x,&y);
    printf("x =%lf, y = %lf\n", x, y);
    return 0;
}