/* suppose std C libraries are included here */
#include <stdio.h>
#include <stdlib.h>

#define N 4 /* this number can be changed */
void compare_with_each_row(int m[][N], int q[], int n);
void compare_with_each_column(int m[][N], int q[], int n);
main()
{
	int matrix[N][N] = {{10, 10, 30, 45},
 						{14, 10, 32, 11},
 						{20, 30, 40, 50},
 						{35 ,45, 25, 15} };
 	int query[N];
 	int i;

 	printf("Enter %d integers to search in 2D array ", N);
 	for(i=0; i < N; i++)
	{
 		printf("Enter query[%d] = ", i);
 		scanf("%d", &query[i]);
 	}
 	compare_with_each_row( matrix, query, N );
 	compare_with_each_column( matrix, query, N );
}

/*
When the above program is executed, suppose a user enters
10 10 30 45 as the query.
Then the program should print:
Row 0 is the same as query
Column 1 is the same as query
*/

void compare_with_each_row(int m[][N], int q[], int n) // (left-to-right ?)
{
	int i, j, count;
	
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(j == 0)
			{
				count = 0;
			}
			if(m[i][j] == q[j])
			{
				count++;
			}
			if(count == n)
			{
				printf("Row same at %d\n", i);
			}
		}
	}
}

void compare_with_each_column(int m[][N], int q[], int n) // (top-to-bottom ?)
{
	int i, j, count;
	
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(j == 0)
			{
				count = 0;
			}
			if(m[j][i] == q[j])
			{
				count++;
			}
			if(count == n)
			{
				printf("Column same at %d\n", i);
			}
		}
	}
}
