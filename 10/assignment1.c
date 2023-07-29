#include <stdio.h>

#define IS_DIGIT(c) ((c) >= '0' && (c) <= '9')

static inline int is_digit(char c) {
    return c >= '0' && c <= '9';
}

int main() {
    char ch = '0';
    
    printf("Macro: %d\n", IS_DIGIT(ch++));  // マクロの場合
    ch = '0';  // ポインタをリセット
    printf("Inline Function: %d\n", is_digit(ch++));  // インライン関数の場合

    return 0;
}