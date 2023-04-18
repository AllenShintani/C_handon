#include <stdio.h>

int max(int a, int b, int c) {
    int max_num = a;
    if (b > max_num) {
        max_num = b;
    }
    if (c > max_num) {
        max_num = c;
    }
    return max_num;
}

int main ( ) {
    int X, Y, Z;
    printf ( "Xを入力してください\n" );
    scanf ( "%d" , & X);
    printf ( "Yを入力してください\n" );
    scanf ( "%d" , & Y);
    printf ( "Zを入力してください\n" );
    scanf ( "%d" , & Z);
    printf("Maximun value is %d\n", max(X, Y, Z));
    return 0;
}