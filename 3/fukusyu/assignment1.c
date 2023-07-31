#include <stdio.h>

int sum = 0;

int withdraw(int amount){
    if (sum >= amount){
    sum -= amount;
    printf("withdraw func is:%d\n", sum);
    return 1;
    }
    return 0;
}

void deposit(int amount){
    sum += amount;
    printf("deposit func result is: %d\n",sum);
}

int balance() {
    printf("balance func result:%d\n",sum);
    return 1;
}

int main(){
    int amount;
    scanf("%d",&sum);
    scanf("%d",&amount);
    withdraw(amount);
    balance();
    deposit(amount);
    printf("last balance is:%d\n",sum);
}