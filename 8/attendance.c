#include <stdio.h>

int main()
{
    FILE *fp = fopen("test.txt", "r"); // "r" for read
    if(!fp){
        fprintf(stderr, "ERROR: failed to open file\n");
        return 1;
    }

    char buf[128];
    
    while(fgets(buf, sizeof(buf), fp) != NULL){
        printf("%s", buf);
    }
    
    fclose(fp);
    return 0;   
}
