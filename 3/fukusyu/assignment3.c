#include <stdio.h>

int max(int a, int b, int c, int d, int e, int *idx){
    int max_nm = a;
    if (max_nm < b){
        max_nm = b;
    };
    if (max_nm < c){
        max_nm = c;
    };
    if (max_nm < d){
        max_nm = d;
    };
    if (max_nm < e){
        max_nm = e;
    };
    *idx = max_nm;
    return 0;
}

int main(){
    int a, b, c, d, e;
    int idx;
    scanf("%d\n%d\n%d\n%d\n%d", &a,&b,&c,&d,&e);
    max(a,b,c,d,e,&idx);
    printf("max value is:%d\n",idx);
    return 0;
}