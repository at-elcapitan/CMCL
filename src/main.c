#include "main.h"

int main(int argc, char *argv[]) {
    if (argc == 1) {
        printf("Usage: CMCLi <filename> <arguments>\n");
        return 0;
    }
    

    for (int x = 1; x != argc; ++x) {
        if (strcmp(argv[x], "-h") == 0 || strcmp(argv[x], "--help") == 0) {
            printf("Usage: CMCLi  <arguments>\n");
            return 0;
        }

        if (strcmp(argv[x], "-v") == 0 || strcmp(argv[x], "--version") == 0) {
            printf("C Math Calculating Language Interptiter (CMCLi) v0.0.1\n");
            printf("Copyrignt (C) Vladislav 'ElCapitan' Nazarov 2023\n\n");
            return 0;
        }

        FILE *f = fopen(argv[x], "r");
        if (f == NULL) {
            fprintf(stderr, "File %s not found\n", argv[x]);
            return 1;
        }

        char *line = NULL;

        ML_SpellCheck(f);

        fclose(f);
    }
    return 0;
}