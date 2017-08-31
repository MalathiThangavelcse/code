#include<stdio.h>
int main()
{
char a,b[10]="aeiouAEIOU";
scanf("%c",&a);
for(i=0;b[i]!='\0';i++)
{
if(a==b[i])
{
printf("character is a vowel");
}
else
{
printf("character is a constant");
}
return 0;
}
