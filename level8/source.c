#include <unistd.h>

int
main (void) {

    while (1) {

        printf("%p, %p \n", 0x8049aac, 0x8049ab0);

        char buff[32];
        if (fgets(buff, 128, stdin) == NULL) break;
        if (strncmp("auth ", buff, 5) == 0) malloc(4);
        if (strncmp("reset", buff, 5) == 0) free((void *) 0x8049aac);
        if (strncmp("service", buff, 6) == 0) strdup();
        if (strncmp("login", buff, 5)) {}
        if (((unsigned int *)0x8049aac)[32]) system("/bin/sh");
    }
}
