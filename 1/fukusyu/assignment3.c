#include <stdio.h>



int main (){
    int X,Y,Z;
    printf("Xを入力してください\n");
    scanf("%d",&X);
    printf("Yを入力してください\n");
    scanf("%d",&Y);
    printf("Zを入力してください\n");
    scanf("%d",&Z);
    if ( X > Y && X > Z){
        printf("Maximum value is %d\n",X);
    }
    if ( Y > X && Y > Z){
        printf("Maximum value is %d\n",Y);
    }
    if( Z > X && Z > Y){
        printf("Maximum value is %d\n",Z);
    }
}