#include <stdio.h>

int factorial(int n){
    int y = n;
    for (int x = n-1 ; x > 0; x--){
        y *= x;
    }
    printf("%d\n",y);
    return 0;
}

int main(){
    int n;
    scanf("%d",&n);
    factorial(n);
    return 0;
}