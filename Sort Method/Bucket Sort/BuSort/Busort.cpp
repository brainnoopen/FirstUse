#include<stdio.h>

int main()
{
	int a[1001],i,j,t,n;
	/* 
	initial value
	*/
	for(i=0;i<=1000;i++) 
		 a[i]=0;

	/*
	recycle read 
	*/
	scanf("%d",&n);
	//for(i=0;i<=n;i++)
	for(i=1;i<=n;i++)
	{
		scanf("%d",&t);
		a[t]++;
	}

	/* 
	count number	
	*/
	for(i=1000;i>=0;i--)
		for(j=1;j<=a[i];j++) //number of printing
			//printf("%d",&i);
			printf("%d ",i);

	getchar();getchar();
	return 0;
}