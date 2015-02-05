#include<stdio.h>

struct student
{
	//char name;
	char name[5];
	char score;
};    //error 1 Do not forget to add semicolon

int main()
{
	struct student s[50],temp;
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		//scanf("%s",&s[i].name); error 2 
		scanf("%s",s[i].name);  
		scanf("%d",&s[i].score);
	}

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			if(s[j].score>s[j+1].score)
			{
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
		}
	}

	for(i=1;i<=n;i++)  
		printf("%s\n",s[i].name);

	getchar();getchar();
	
	return 0;
}
	

			
/*
error 3
目的是通过得分的顺序来输出姓名
下面程序改变了单个数组的值
if(student[j].score>student[j+1].score)
	{
		temp=student[j].score;
		student[j].score=student[j+1].score;
		student[j+1].score=temp;
	}
*/			
