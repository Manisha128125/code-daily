#include<stdio.h>
int main()
{
	int arr[6]={3,2,9,1,8,0};
	int i,j;
	for(i=0;i<6;i++)
	{
		for(j=i+1;j<6;j++)
		{
			if(arr[i]>arr[j])
			{
				arr[i]=arr[j]+arr[i];
				arr[j]=arr[i]-arr[j];
				arr[i]=arr[i]-arr[j];
			}	
		}
	}
	for(i=0;i<6;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}
