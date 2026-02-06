#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n1,n2,p=1;
    scanf("%d %d",&n1,&n2);
    for(int i=1;i<=n2;i++){
        p=p*n1;
    }
    printf("%d",p);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
