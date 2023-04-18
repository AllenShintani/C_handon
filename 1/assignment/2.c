#include <stdio.h>

int JST_to_EST(int jst)
{
    int est = jst - 14; /*JSTとESTの時差は14時間*/
    if (est < 0) {
        est += 24;
    }
    return est;
}

int main()
{
    int hour;
    printf("今日本で何時(0-23)?\n");
    scanf("%d", &hour);
    if(hour >= 0 && hour <= 23){
    printf("今ニューヨークは%d時です\n", JST_to_EST(hour));
    return 0;}
    else{
        printf("エラー: 正しい時刻を入力してください\n");
        return 1;
    }
}