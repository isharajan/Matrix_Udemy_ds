#include<stdio.h>
void create_diaginal_matrix(int data[],int arrlen)
{
	int i,j,k;
	int diagnal_array[10][10];
	k=0;
	for(i=0; i<arrlen; i++)
	{
		for(j=0; j<arrlen; j++)
		{
			if(i == j)
			{
				diagnal_array[i][j] = data[k];
				k++;
			}
			else
			{
				diagnal_array[i][j] = 0;
			}
		}
	}



	for(i=0; i<arrlen; i++)
	{
		for(j=0; j<arrlen; j++)
		{
			printf("%d ",diagnal_array[i][j]);
		}
		printf("\n");
	}

}

void main()
{
	int data[]={1,2,3,4,5};
	int arrlen = sizeof(data)/sizeof(data[0]);
	create_diaginal_matrix(data,arrlen);
}