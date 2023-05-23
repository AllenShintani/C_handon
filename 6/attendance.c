#include <stdio.h>
#include <string.h>

void tail(const char *s) {
    if (strlen(s) == 0) {
        printf("\n");
    } else {
        printf("%s\n", s + 1); 
    }
}

int main() {
    // テストケース
    const char *s1 = "Hello";
    tail(s1); 

    const char *s2 = "A";
    tail(s2); 

    const char *s3 = "";
    tail(s3); 

    return 0;
}
