#include <stdio.h>
#include <string.h>
int main () {
    char math[101];
    scanf("%100s", math);
    int count1=0, count2=0, count3=0;
    for (int i=0; math[i] != '\0'; i++) {
        if (math[i] == '1')
            count1++;
        else if (math[i] == '2')
            count2++;
        else if (math[i] == '3')
            count3++;
    }
    int totalcount = count1+count2+count3;
    while (count1) {
        printf("1");
        count1--;
        totalcount--;
        if (totalcount > 0) printf("+");
    }
    while (count2) {
        printf("2");
        count2--;
        totalcount--;
        if (totalcount > 0) printf("+");
    }
    while (count3) {
        printf("3");
        count3--;
        totalcount--;
        if (totalcount > 0) printf("+");
    }
    return 0;
}