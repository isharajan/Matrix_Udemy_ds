#include<stdio.h>
void create_lower_diaginal_matrix(int n)
{
	int i,j,k;
	int low_triangle_array[10][10];
	k=0;
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(j<=i)
			{
				low_triangle_array[i][j] = 1;
				k++;
			}
			else
			{
				low_triangle_array[i][j] = 0;
			}
		}
	}



	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d  ",low_triangle_array[i][j]);
		}
		printf("\n");
	}

}

void main()
{
	//int data[]={1,2,3,4,5,6,7,8,9,10};
	int n = 6;
	//create_lower_diaginal_matrix(data,n);
	create_lower_diaginal_matrix(n);
}