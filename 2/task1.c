#include <stdio.h>
#include <stdlib.h>

 int main() {
    int num;
    int digit;
    digit = 1;
    printf("正の整数値を入力してください：");
    scanf("%d", &num);
while (num > 9){
    num = num / 10;
    digit = digit + 1;
}
    
printf("The number of digits of num is %d\n", digit);
return  0;
}
