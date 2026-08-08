#include<stdio.h>
int main()
{
    int a[5];
    int b[5];
    int sum[5];

    printf("enter the element in first array:");
    for(int i=0;i<5;i++)
    {
    scanf("%d", &a[i]);
}
printf("enter the element in second array:");
for(int i=0;i<5;i++)
{
    scanf("%d", &b[i]);
}
for(int i=0;i<5;i++){
    sum[i]= a[i]+b[i];



}
printf("sum of array:\n");
for(int i = 0;i<5;i++)
{
    printf("%d", sum[i]);
}
return 0;


}