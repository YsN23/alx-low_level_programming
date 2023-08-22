#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random password
 * 
 * Return: Always 0 (Success)
*/

int main(void) {
    int i;
    int length = 14;
    char password[length + 1];
    char charset[] = "abcdefghijklmnopqrstuvwxyz%!&$*@#^ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int charset_size = sizeof(charset) - 1;

    srand(time(NULL));
    for (i = 0; i < length; i++) {
        int index = rand() % charset_size;
        password[i] = charset[index];
    }
    password[length] = '\0';

    printf("%s\n", password);
    return 0;
}
