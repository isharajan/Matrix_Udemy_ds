#include<stdio.h>
void create_lower_diaginal_matrix(int n)
{
	int i,j,k;
	int low_triangle_array[10][10];
	k=1;
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(j>=i)
			{
				low_triangle_array[j][i] = k;
				//low_triangle_array[i][j] = 1;
			}
			else
			{
			}			
		}
		k++;
	}


	/*for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d  ",low_triangle_array[i][j]);
		}
		printf("\n");
	}*/


	//printf("=======================================================\n");
	int z=1;
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(j>=i)
			{
				low_triangle_array[i][j] = z;
				//low_triangle_array[i][j] = 1;
				
			}
			else
			{
				low_triangle_array[j][i] = low_triangle_array[j][i];	
			}
				

		}
		z++;
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


void matp(int n){

	int i,j,p;

	for(i=0; i<n; i++){
		for(j=0; j<i; j++){
			printf("%d ",j);
		}
		for(p=j; p<n; p++){
			printf("%d ",j);
		}
		printf("\n");
	}

}

void main()
{
	//int data[]={1,2,3,4,5,6,7,8,9,10};
	int n = 10;
	//create_lower_diaginal_matrix(data,n);
	//create_lower_diaginal_matrix(n);
	matp(n);
}