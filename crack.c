#include "crack.h"

char *crack(char *inp, int length, int upper) {
    int test = 0;
    int i;
    while (strlen(inp) < length) {
        inp = appendChar(inp, length);
        printf("%s", inp);
    }
}

char *appendChar(char *input, int length) {
    char chrctr[5] = "a";
    char tmp[length];
    strcat(tmp, chrctr);

    return tmp;
}