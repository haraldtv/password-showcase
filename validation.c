#include "validation.h"

int validation(char *input) {
    if (!(strcmp("password", input))) {
        return 1;
    }
    return 0;
}