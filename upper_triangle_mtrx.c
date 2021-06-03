#include<stdio.h>
void create_upper_diaginal_matrix(int n)
{
	int i,j,k;
	int upper_triangle_array[10][10];
	k=0;
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(j>=i)
			{
				upper_triangle_array[i][j] = 1;
				k++;
			}
			else
			{
				upper_triangle_array[i][j] = 0;
			}
		}
	}



	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d  ",upper_triangle_array[i][j]);
		}
		printf("\n");
	}

}

void main()
{
	//int data[]={1,2,3,4,5,6,7,8,9,10};
	int n = 8;
	//create_lower_diaginal_matrix(data,n);
	create_upper_diaginal_matrix(n);
}