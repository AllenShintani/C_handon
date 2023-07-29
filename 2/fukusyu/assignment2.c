#include <stdio.h>

/*小数はdouble型*/
double power(double x, int n){
    double y = 1.0;
    for (n; n > 0; n--){
        y *= x;
    }
    return printf("%lf\n",y);
    
}

int main(){
    double x;
    int n;
    scanf("%d",&n);
    scanf("%lf",&x);
    power(x,n);
    return 0;
}