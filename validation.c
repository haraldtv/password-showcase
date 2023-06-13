#include "validation.h"
#include  "generate.h"

int validation(char *input, int debug) {

    if (debug == 1) {
        char* tmp;
        generate(tmp, 2, 0);
        printf("%s\n", tmp);

        if (!(strcmp(tmp, input))) {
            return 1;
        }

        return 0;
    }

    return 2;

    /*
    if (!(strcmp("password", input))) {
        return 1;
    }
    return 0;
    */
}