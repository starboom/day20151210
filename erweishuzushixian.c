#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	int hang,lie;

	scanf("%d %d",&hang,&lie);
	// scanf("lie  = %d",&lie);

	int(**p) = (int **)malloc(hang * sizeof(int **));
	int i;
	for(i = 0;i < hang;i++)
	{
		 *(p+i)  = (int *)malloc(lie * sizeof(int));
	}
	int j;
	for(i = 0;i < hang;i++)
	{
		for(j = 0;j < lie;j++)
		{
			 *(*(p+i)+j) = i+j;
			// p[i][j] = i+j;
		}
	}

	for(i=0;i<hang;i++)
	{
		for(j=0;j<lie;j++)
		{
			 printf("%d ",*(*(p+i)+j));
			// printf("%d ",p[i][j] );
		}
		printf("\n");
	}

    for(i=0;i<hang;i++)
    {
    	free(*(p+i));
    	*(p+i)=NULL;
    }
    free(p);
    p=NULL;


	return 0;
}