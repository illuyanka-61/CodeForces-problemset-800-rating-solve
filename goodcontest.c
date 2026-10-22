#include <stdio.h>
int main () {
    int t;
    scanf("%d", &t);
    int test[t];
    for (int i=0; i<t; i++) {
        int n, cont[3];
        test[i] = 0;
        scanf("%d", &n);
        for(int j=0; j<3; j++) {
            scanf("%d", &cont[j]);
        }
        for(int j=0; j<3; j++) {
            int weak = n-cont[j];
            if (weak>test[i])
                test[i]=weak;
        }
    }
    for (int i=0; i<t; i++) {
        printf("%d\n", test[i]);
    }
    return 0;
}