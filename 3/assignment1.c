#include <stdio.h>
#include <stdlib.h>

int monney = 0;

int withdraw(int amount){
    if (amount > monney){
        return -1;
    } else {
        monney -= amount;
        return 0;
    }
}

void deposit(int amount){
    monney += amount;
}

int balance(){
    return monney;
}

int main(){
    int amount;
    printf("整数値を入力してください：");
    scanf("%d", &amount);
    printf("%d",withdraw(amount));
    printf("\n");
    printf("%d",balance());
    printf("\n");
    //printf(deposit(amount));  ←voidだからコンパイル時にエラーになる
    return 0;
}