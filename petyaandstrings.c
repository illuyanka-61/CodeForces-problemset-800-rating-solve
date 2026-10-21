#include <stdio.h>
#include <string.h>
int main () {
    char str1[102], str2[102];
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);
    strlwr(str1);
    strlwr(str2);
    int x = strcmp(str1, str2);
    printf("%d", x);
    return 0;
}