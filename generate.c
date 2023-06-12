#include "generate.h"

char *generate(char *str, int size, int debug)
{
    int i;

    str = malloc(size * sizeof(char));

    srand(time(NULL));

    for (i = 0; i < size; i++)
    {
        // Generates a random character. takes a random int between 0 and
        str[i] = (97 + (rand() % ((122 - 97) + 1)));
    }

    if (debug == 1)
    {
        printf("%s\n", str);
        for (i = 0; i < size; i++)
        {
            printf("%d  ", str[i]);
        }
    }

    return str;
}