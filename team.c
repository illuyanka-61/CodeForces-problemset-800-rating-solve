#include <stdio.h>
int main () {
    int n, arr[3], vote, count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        vote = 0;
        for(int j = 0; j < 3; j++) {
            scanf("%d", &arr[j]);
            if (arr[j] == 1)
                vote += 1;
            
        }
        if (vote >= 2)
            count += 1;
    }
    printf("%d", count);
    return 0;
}