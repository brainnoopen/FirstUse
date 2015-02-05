#include<stdio.h>
#include<iostream>
int a[51],n;

void QuickSort(int ,int );

int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);

		QuickSort(1,n);

	printf("%d ",a[1]); //first input smallest
	for(i=2;i<=n;i++)
	{
		if(a[i]!=a[i-1]) //leave out the same number
			printf("%d ",a[i]);
	}
	system("pause");
	return 0;
}

void QuickSort(int left,int right)
{
	int i,j,t,temp;
	if(left>right)
		return;

	temp=a[left];
	i=left;
	j=right;

	while(i!=j)
	{
		/*while(a[j]>temp&&j>i)
			j--;
		while(a[i]<temp&&i<j)
			i++;
		*/
		while(a[j]>=temp&&j>i)
			j--;
		while(a[i]<=temp&&i<j)
			i++;


		if(i<j)
		{
			t=a[j];
			a[j]=a[i];
			a[i]=t;
		}
	}

	a[left]=a[j]; //equal:a[left]=a[i]; 
	a[i]=temp;
	
	QuickSort(left,i-1);
	QuickSort(i+1,right);


}
