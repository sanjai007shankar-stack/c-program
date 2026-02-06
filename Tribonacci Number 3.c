#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d",&n);
 int a=0;
 int b=1;
 int c=1;
 if(n==0||n==1){
      printf("%d ",n);
      return;
 }
int d=0;
 for(int i=2;i<=n;i++){
    d=a+b+c;
   a=b;
   b=c;
   c=d;
 }
  printf("%d ",d);
    return 0;
}
