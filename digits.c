#include <stdio.h>
int main () {
    int n;
    long t;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%ld", &t);
        if (t == 0) {
            printf("0\n");
            continue;
        }
        while (t != 0) {
            long x = t % 10;
            printf("%ld ", x);
            t = t / 10;
        }
        printf("\n");
    }
    return 0;
}