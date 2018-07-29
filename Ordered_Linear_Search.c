//This searching is used when list is already sorted..
#include<stdio.h>
int search(int a[],int n,int ele)
{
  for(int i=0;i<n;i++)
  {
  	if(a[i]==ele)
  		return 1;
  	else if(a[i]>ele)
  		return 0;
  }
  return 0;
}
int main()
{
	int n,i,ele;
  //Length of the array
	scanf("%d",&n);
	int a[n];
  //Element in the array
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
  //element which you want to search
scanf("%d",&ele);
	if(search(a,n,ele))
		printf("\nSuccessfull");
	else
		printf("\nNot Found");
	return 0;
}
