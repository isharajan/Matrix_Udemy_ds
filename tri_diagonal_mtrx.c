#include<stdio.h>
void main()
{
	int arr[10][10];
	int i,j;
	int n=5;

	for(i=0; i<n; i++)
	{
		for(j=0 ;j<n;j++)
		{
			if(i-j<=1 && j<=i+1)
			{
				arr[i][j] = 1;
			}
			else
			{
				arr[i][j] = 0;
			}
		}
	}



	//display
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}