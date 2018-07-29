#include<stdio.h>
int interPolation(int a[],int n,int ele)
{
	int low=0,high=n-1,mid=0;
	while(a[low]<=ele&&a[high]>=ele)
	{
		if(a[high]-a[low]==0)
			return (low+high)/2;
		mid=low+((ele-a[low])*(high-low))/(a[high]-a[low]);
		if(a[mid]<ele)
			low=mid+1;
		else if(a[mid]>ele)
			high=mid-1;
		else
			return mid;
	}
	if(a[low]==ele)
		return low;
	else
		return -1;
}
int main()
{
	int n,i,ele;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	scanf("%d",&ele);
	if(interPolation(a,n,ele)==-1)
		printf("\nNot Found..");
	else
		printf("\nSuccessfull..");
	return 0;
}
