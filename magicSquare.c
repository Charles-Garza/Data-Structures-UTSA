#include <stdio.h>
#include <string.h>
/* suppose all standard C libraries are included here */
//#define N 3 /* the number N can be large in an actual program */
#define N 5 /* the number N can be large in an actual program */

int allRowsOK(int MS[][N], int SS);
int allColumnsOK(int MS[][N], int SS);
int mainDiagOK(int MS[][N], int SS);
int secondaryDiagOK(int MS[][N], int SS);

// Works for any N sized array
main()
{
 int MS[N][N] = {{23, 6, 19, 2, 15},
 				 {4, 12, 25, 8, 16},
 				 {10, 18, 1, 14, 22},
				 {11, 24, 7, 20, 3},
				 {17, 5, 13, 21, 9}};
 int SS = (N*(N*N+1)/2);
 printf("SS = %d\n", SS);
 if(allRowsOK(MS, SS) && allColumnsOK(MS, SS) &&
 mainDiagOK(MS, SS) && secondaryDiagOK(MS, SS) )
 printf("YES, this is a Magic Square! \n");
 else
 printf("NO, this is NOT a Magic Square! \n");
}

/* This function returns 1 if the sum of
every row is equal to SS;
otherwise, return 0 */ // 8pt
int allRowsOK(int MS[][N], int SS)
{
 int sum, i, j;
 
 for(i = 0; i < N; i++)
 {
 	for(j = 0; j < N; j++)
 	{
 		sum += MS[j][i];
 		printf("Sum of Magic Square (row[%d][%d]): %d\n", j, i, sum);
	}
	
	if(sum == SS)
	{
		sum = 0;
	}
	else
		return 0;
 }
 return 1;
}

/* This function returns 1 if the sum of
every column is equal to SS; otherwise,
return 0 */ // 7pt
int allColumnsOK(int MS[][N], int SS)
{
 int sum, i, j;
 
 for(i = 0; i < N; i++)
 {
	 for( j = 0; j < N; j++)
 	{
 		sum += MS[i][j];
 		printf("Sum of Magic Square (column[%d][%d]): %d\n", i, j, sum);
	}
	if(sum == SS)
	{
		sum = 0;
	}
	else
		return 0;
 }
 return 1;
}

/* This function returns 1 if the sum of
the main diagonal is equal to SS;
otherwise, return 0 */
int mainDiagOK(int MS[][N], int SS)
{
 int sum, i;
 sum=0;
 
 for(i=0; i < N; i++)
 {
 	sum = sum + MS[i][i];
 	printf("Sum of Magic Square (mainDiagOK[%d][%d]): %d\n", i, i, sum);
 }
 
 if (sum != SS) 
 	return 0;

 return 1;
}

/* This function returns 1 if the sum of
the secondary diagonal is equal to SS;
otherwise, return 0 */ // 5pt
int secondaryDiagOK(int MS[][N], int SS)
{
 int sum, i;
 sum = 0;
 
 for(i = N; i > 0; i--)
 { 
	sum += MS[N-i][i-1];
 	printf("Sum of Magic Square (secondaryDiagOK[%d][%d]]): %d\n", N-i, i-1, sum);
 }
 
 if(sum != SS)
 	return 0;

return 1;
}
