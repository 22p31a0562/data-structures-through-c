#include<stdio.h>
int linear_search_recursive(int *arr, int n, int i, int se)
{
	if(i==n)
	{
		return -1;
	}
	if(arr[i] == se)
	{
		return i;
	}
	
}
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n],i;
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	int se;
	scanf("%d",&se);
	int res = linear_search_recursive(arr,n,0,se);
	if(res==-1)
	{
		printf("Element not found");
	}
	else
	{
		printf(" found at %d index",res);
	}
}
