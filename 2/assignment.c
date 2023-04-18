#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    printf("整数値を入力してください：");
    scanf("%d", &num);
    int absNum = abs(num); // 絶対値を求める
    printf("絶対値は%dです。\n", absNum);
    return 0;
}