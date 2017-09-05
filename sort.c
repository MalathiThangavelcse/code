#include<iostream.h>
int main()
{
int n,i,v[100],k=0,p=0;
cin>>n;
for(i=0;i<n;i++)
{
cin>>v[i];
}
for(i=0;i<n-1;i++)
{
if(v[i]>v[i+1])
k++;
}
for(i=0;i<n-1;i++)
{
if(v[i]<v[i+1])
p++;
}
if(p==n-1 || k==n-1)
cout<<"Yes";
else 
cout<<"No";
return 0;
}
