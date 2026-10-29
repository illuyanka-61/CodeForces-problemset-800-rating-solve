#include <stdio.h>
int main () {
    int n;
    scanf("%d", &n);
    if(n<=5) {
        printf("1\n");
        return 0;
    }
    if(n%5 == 0) {
        int x=n/5;
        printf("%d\n", x);
    }
    else {
        int x=n/5;
        printf("%d", x+1);
    }
    return 0;
}