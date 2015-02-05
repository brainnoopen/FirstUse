#include<stdio.h>
int main()
{
	int a[50],i,j,t,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);

	for(i=1;i<=n;i++)
	{	for(j=1;j<=n-i;j++)
		{
			if(a[j]>a[j+1])
			{t=a[j];a[j]=a[j+1];a[j+1]=t;}
		}	
	}
	
	printf("%d ",a[n]); //first input the largest
	for(i=n-1;i>=1;i--)
	{
		if(a[i]!=a[i+1]) //leave put the same number
			printf("%d ",a[i]);
	}

	return 0;
}