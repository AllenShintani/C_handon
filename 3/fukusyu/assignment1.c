#include <stdio.h>

int sum = 0;

int withdraw(int amount){
    if (sum >= amount){
    sum -= amount;
    return 1;
    }
    return 0;
}

int main(){
    int amount;
    scanf("%d",&sum);
    scanf("%d",&amount);
    withdraw(amount);
    printf("%d\n",sum);
}