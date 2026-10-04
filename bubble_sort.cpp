#include<stdio.h>
int main()
{
	int a[6],i,j;
	for(i=0;i<6;i++)//输入部分 
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)//冒泡排序 
	{
		for(j=0;j<5-i;j++)
		{
			if(a[j]>a[j+1])//从小到大排序 
			{
				int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(i=0;i<6;i++)//输出部分 
	{
		printf("%4d",a[i]);
	}
	return 0;
 }
