#include "ML_spellcheck.h"

void ML_SpellCheck(FILE* file) {
    char *line = NULL;
    size_t len;
    char *read;

    while (read = getline(&line, &len, file) != -1)
    {
        printf("%s", line);
    }
}

