#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int count=0,temp=n;
    while(temp!=0){
        count++;
        temp=temp/10;
    }
    temp=n;
    int sum=0,r=0;
    while(temp>0){
        r=temp%10;
        int power=1;
        for(int i=0;i<count;i++){
            power=power*r;
        }
        sum=sum+power;
        temp=temp/10;
    }
    if(sum==n){
        printf("true");
    }
    else{
        printf("false");
    }
