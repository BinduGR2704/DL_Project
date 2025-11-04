/* overflow.c  -- Vulnerable demo (lab only) */
#include <stdio.h>
#include <string.h>

int main(void)
{
    char buff[15];
    int pass = 0;

    printf("\nEnter the password: ");
    /* WARNING: gets is unsafe — used here intentionally for demonstration */
    gets(buff);

    /* check password: strcmp returns 0 when equal */
    if (strcmp(buff, "thegeekstuff") == 0) {
        /* correct password path */
        printf("\nCorrect Password\n");
        pass = 1;
    } else {
        printf("\nWrong Password\n");
    }

    if (pass) {
        /* LAB ONLY: do NOT give real privileges in production */
        printf("\nRoot privileges given to the user\n");
    }

    return 0;
}
