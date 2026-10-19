#include <stdio.h>
int main () {
    int n;
    int x;
    int max = -1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        if (x > max)
            max = x;
    }
    printf("%d", max);
    return 0;
}