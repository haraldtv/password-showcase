#include <stdlib.h>
#include <stdio.h>

#include "generate.h"
#include "validation.h"

int main(int argc, char **argv) {
    if (argc > 0) {
        printf("%d\n", validation(argv[1]));
    }

    //char *str;
    //printf("%s", generate(str, 100, 0));
    
}