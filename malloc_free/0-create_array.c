#include "main.h"

char *create_array(unsigned int size, char c)
{
        char *p;
        unsigned int i;
        if (size == 0)
        return (0);
        p = malloc(sizeof(p) * size);
        if (p == 0)
        return (0);
        for (i = 0; i < size; i++)
        p[i] = c;
return (p);
}
