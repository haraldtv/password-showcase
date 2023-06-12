#include "validation.h"

int validation(char *input) {
    if (strcmp(input, "password")) {
        return 1;
    }
    return 0;
}