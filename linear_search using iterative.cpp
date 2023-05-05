#include<stdio.h>
int linear_sea(int *a,int n,int se)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]==se)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
int se;
scanf("%d",&se);
 int res=linear_sea(a,n,se);
if(res==-1)
{
	printf("Element not found");
}
else
{
	printf("found at %d index",res);
}
	
	
}
