#include<stdio.h>
void MinMax(int i,int j,int min,int max);
int main()
{
	int min=0,max=0;
	int mid,i,j,n;
	int a[100];
	printf("Enter no of elements");
	scanf("%d",&n);
	printf("Terms ");
		for(i=1;i<n;i++)
			{
				scanf("%d",&a[i]);
				printf("Terms are %d",a[i]);
			}
MinMax();
}
void MinMax(int i,int j,int min,int max)
{
		i=1;
		j=n;

	if(i==j)
	{
		max:=min:=a[i];	
		printf("Min term is ::: %d",min);
		printf("Max term is ::: %d",max);
	}
	else if(i==j-1)
	{
		if(a[i]<a[j])
			{
			min=a[i];
			printf("Min term is:::",min);
			}
		else
			{
			max=a[i];
			printf("Max term is:::",max);
			}
	}
}
