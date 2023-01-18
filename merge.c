#include<stdio.h>
void main()
{
int a[10],b[10],c[20],i,j,k,p,m,n;
printf("enter the size of first array:\n");
scanf("%d",&n);
printf("enter the elements of first array:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the size of second array:\n");
scanf("%d",&m);
printf("enter the elements of second array:\n");
for(j=0;j<m;j++)
{
scanf("%d",&b[j]);
}
i=0,j=0,k=0;
while(i<n&&j<m)
{
	if(a[i]<b[j])
	{
	c[k]=a[i];
	i++;
	k++;
	}
	else if(a[j]>b[j])
	{
	c[k]=b[j];
	j++;
	k++;
	}
	else
	{
	c[k]=b[j];
	i++;
	j++;
	k++;
	}
}
while(j<m)
{
c[k]=b[j];
j++;
k++;
}
printf("resultant array:");
p=k;
for(k=0;k<p;k++)
{
printf("%d\n",c[k]);
}
}



