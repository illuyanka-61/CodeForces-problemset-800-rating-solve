#include <stdio.h>
int mex() {
    int n, k;
    scanf("%d%d", &n, &k);
    int a[n];
    for (int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    int x=1, y=0;
    while(x) {
        for (int i=0; i<n; i++) {
            if (y != a[i]) {
                x=0;
                break;
            }
        }
        if (x==1) y++;
    }
    return y;
}
int main () {
    int t, z;
    scanf("%d", &t);
    while (t != 0) {
        z = mex();
        printf("%d", z);
        t--;
    }
    return 0;
}