#include <stdio.h>
#include <string.h>
int main () {
    char name[101];
    int seen[26] = {0};
    int distinct=0;
    scanf("%s", name);
    int len = strlen(name);
    for (int i=0; i<len; i++) {
        int index = name[i] - 'a';
        if (!seen[index]) {
            seen[index] = 1;
            distinct++;
        }
    }
    if (distinct%2==0) {
        printf("CHAT WITH HER!\n");
    }
    else {
        printf("IGNORE HIM!");
    }
    return 0;
}