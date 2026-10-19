#include <stdio.h>
#include <string.h>
int main () {
    int n, i, length;
    scanf("%d", &n);
    getchar();
    char str[101];
    
    for (i = 0; i < n; i++) {
        scanf("%100s", str);
        length = strlen(str);
        if (length > 10) {
            printf("%c%d%c\n", str[0], length-2, str[length-1]);
        }
        else {
            printf("%s\n", str);
        }
    }
    return 0;
}