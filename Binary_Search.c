#include<stdio.h>
int main()
{
	int n,i,low,high,mid=0,ele,f=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	scanf("%d",&ele);
  low=0;
  high=n-1;
  mid=0;
  while(low<=high&&a[mid]!=ele)
  {
     mid=(low+high)/2;
     if(a[mid]==ele)
     {
     	f=1;
     	printf("\nSuccessfull..");
     }
     else if(a[mid]<ele)
     	low=mid+1;
     else
     	high=mid-1;
  }
  if(f==0)
  	printf("\nNot Found");

	return 0;
}
