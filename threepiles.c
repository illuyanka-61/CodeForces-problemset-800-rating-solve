#include <stdio.h>
#include <stdlib.h>
int main () {
    int t;
    scanf("%d", &t);
    long long score[t];
    for (int i=0; i<t; i++) {
        long long piles[3];
        for (int j=0; j<3; j++) {
            scanf("%lld", &piles[j]);
        }
        int option1 = llabs(piles[0]-piles[1]);
        int option2 = llabs(piles[0]-piles[1]+piles[2]);
        score[i] = (option1 > option2) ? option1 : option2;
        
    }
    for (int i=0; i<t; i++) {
        printf("%lld\n", score[i]);
    }
    return 0;
}