#include <stdio.h>

int main(int argc, char *argv[]) {

    // make sure there's at least one input argument
    if (argc < 2) {
        int i = argc - 1;
        printf("bins expects at least 1 argument, %i provided\n", i);
        printf("usage: bins [filename] [filename] ...\n");
        
        return -1;
    }

    // iterate through file names, skipping program name
    for (int i = 1; i < argc; i++) {
        FILE *f = fopen(argv[i], "r");
        if (f == NULL) {
            printf("Couldn't open file %s\n", argv[i]);
        } else {
            printf("[%s]\n", argv[i]);
            unsigned int c;
            while ( (c = fgetc(f)) != EOF) {
                printf("%02x ", c);
            }
            printf("\n");
            fclose(f);
        }
    }


    return 0;
}