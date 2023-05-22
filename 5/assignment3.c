#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char *strdupcat(const char *s, const char *t) {
    char *result = malloc(strlen(s) + strlen(t) + 1); 

    if (result == NULL) {
        return NULL;
    }

    strcpy(result, s);

    strcat(result, t);

    return result;
}
int main() {
    const char *s = "Hello ";
    const char *t = "World";

    char *result = strdupcat(s, t);

    if (result != NULL) {
        printf("%s\n", result); 

        free(result);
    } else {
        printf("Memory allocation failed\n");
        return 1;
    }

    return 0;
}