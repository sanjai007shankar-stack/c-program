#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int c1,c2,c3,q1,q2,q3,b;
    float temp,t,at;
    scanf("%d%d",&c1,&q1);
    scanf("%d%d",&c2,&q2);
    scanf("%d%d",&c3,&q3);
    scanf("%d",&b);
    t=(c1*q1)+(c2*q2)+(c3*q3);
    temp=(t*0.10);
    at= temp+t;
    printf("Total (Before Tax): %.2f\n",t);
    printf("Total (After Tax): %.2f\n",at);
    if(at<=b){
        printf("Within Budget");
}else{
        printf("Over Budget");
}
    return 0;
}
