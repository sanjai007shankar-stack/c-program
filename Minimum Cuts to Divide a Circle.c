#include<stdio.h>
int main(){
    int n;
    printf("n = ");
    scanf("%d",&n);
    if(n==0&&n%2==0){
        n/=2;
        printf("%d",n);

    }else{
        printf("%d",n);
    }
    return 0;
}
