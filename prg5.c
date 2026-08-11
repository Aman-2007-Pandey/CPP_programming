#include<stdio.h>
int main(){
    int max=0,min=0,i;
    int a[5] = {3,-4,5,9,-2};
    max=a[0];
    min=a[0];
    for(i=0;i<5;i++){
        if(a[i]<min)
        min=a[i];
        if(a[i]>max)
        max=a[i];
    }
    printf("max value is %d\n,max");
    printf("min value is %d,min");
    return 0;
}