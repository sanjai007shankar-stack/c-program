#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int row = 1; row <= n; row++) {

        int start;
        if (row % 2 == 1)
            start = 1;
        else
            start = 0;

        for (int col = 1; col <= n - row + 1; col++) {
            printf("%d", start);
            start = 1 - start;  
        }

        printf("\n");
    }

    return 0;
}
