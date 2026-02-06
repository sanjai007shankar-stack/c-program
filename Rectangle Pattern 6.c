#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,a;
    scanf("%d %d",&n,&a);
    for(int r=1;r<=n;r++){
        for(int j=1;j<=a;j++){
            printf("*");
        }
        printf("\n");
}
    return 0;
}
