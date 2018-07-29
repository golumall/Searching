#include<stdio.h>
int search(int a[],int n,int ele)
{
  for(int i=0;i<n;i++)
  {
  	if(a[i]==ele)
  		return 1;
  }
  return 0;
}
int main()
{
	int n,i,ele;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
scanf("%d",&ele);
	if(search(a,n,ele))
		printf("\nSuccessfull");
	else
		printf("\nNot Found");
	return 0;
}
