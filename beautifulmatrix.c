#include <stdio.h>
int main () {
    int matrix[5][5], steps=0, i, j, x, y;
    for(i=0; i<5; i++) {
        for(j=0; j<5; j++) {
            scanf("%d", &matrix[i][j]);
            if(matrix[i][j] == 1) {
                x = i;
                y = j;
            }
        }
    }
    if (matrix[2][2] == 1) {
        printf("0");
        return 0;
    }
    while(x!=2 || y!=2) {
        if (x<2) {
            x++;
            steps++;
        }
        else if (x>2) {
            x--;
            steps++;
        }
        if (y<2) {
            y++;
            steps++;
        }
        else if (y>2) {
            y--;
            steps++;
        }
    }
    printf("%d", steps);

    return 0;
}