/* safe_overflow_fixed.c -- safer version */
#include <stdio.h>
#include <string.h>

int main(void)
{
    char buff[64];
    int pass = 0;

    printf("\nEnter the password: ");
    if (fgets(buff, sizeof(buff), stdin) == NULL) {
        return 1;
    }
    /* remove newline if present */
    buff[strcspn(buff, "\n")] = '\0';

    if (strcmp(buff, "thegeekstuff") == 0) {
        printf("\nCorrect Password\n");
        pass = 1;
    } else {
        printf("\nWrong Password\n");
    }

    if (pass) {
        /* Do not actually grant root privilege — just demonstration text */
        printf("\n( Demo ) Root privileges would be given to the user\n");
    }

    return 0;
}
