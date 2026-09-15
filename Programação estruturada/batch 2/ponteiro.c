#include <stdio.h>
#include <string.h>

int main() {
    char *a = "abacate";
    char *b = "uva";

    if (strcmp(a, b) < 0)
        printf("%s vem antes de %s no dicionário\n", a, b);
    else
        printf("%s vem depois de %s no dicionário\n", a, b);

    return 0;
}
