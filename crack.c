#include "crack.h"

char *crack(char *inp, int length, int upper) {
    int test = 0;
    int i;
    while (strlen(inp) < length) {
        appendChar(inp);
    }
}

void appendChar(char *input) {
    char chrctr[20] = "a";
    strcat(input, chrctr);
}