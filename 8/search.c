#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp = fopen("search.c", "r");
    if(!fp) {
        fprintf(stderr, "ERROR: failed to open file\n");
        return 1;
    }

    char buf[128];
    int line_number = 1;
    
    while(fgets(buf, sizeof(buf), fp) != NULL) {
        if(strstr(buf, "int") != NULL) {
            printf("Line %d: %s", line_number, buf);
        }
        line_number++;
    }

    fclose(fp);
    return 0;
}
