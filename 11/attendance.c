#include <stdio.h>
#include <stdlib.h>

#ifndef LANG
#define LANG 0
#endif

void print_time(int hour) {
    if(hour < 0 || hour > 23) {
        fprintf(stderr, "Invalid input. Please enter a number between 0 and 23.\n");
        exit(1);
    }

    int is_pm = hour >= 12;
    int converted_hour = hour % 12 == 0 ? 12 : hour % 12;
    
    #if LANG == 1
    printf("%d時%s\n", converted_hour, is_pm ? "PM" : "AM");
    #else
    printf("%d %s\n", converted_hour, is_pm ? "PM" : "AM");
    #endif
}

int main(int argc, char *argv[]) {
    if(argc != 2) {
        fprintf(stderr, "Usage: %s <hour>\n", argv[0]);
        exit(1);
    }
    
    int hour = atoi(argv[1]);
    print_time(hour);
    return 0;
}
