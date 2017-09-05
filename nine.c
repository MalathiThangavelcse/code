#include<stdio.h>
int main()
{
int a[10],i,N,sum=0;
scanf("%d",&N);
for(i=0;i<N;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
printf("The sum is:%d",sum);
return 0;
}
