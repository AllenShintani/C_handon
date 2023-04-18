#include <stdio.h>
#include <unistd.h>

int main(){
    int seconds;
    printf("秒数を入力してください");
    scanf("%d", &seconds);

    while (seconds > 0)
    {
        printf("%d\n", seconds);
        seconds--;
    sleep(1);    }
    return 0;

}