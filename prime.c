#include <stdio.h>
int main(void) {
int n,i,j,f,count=0;
scanf("%d",&n);
for(i=2;i<=n;i++)
{
	f=0;
	for(j=2;j<i;j++)
	{
		if(i%j==0)
		{
		f=1;
		break;
		}
	}
if(f==0&&n!=1)
count++;
}
printf("The number of prime number is:%d",count);
	return 0;
}
