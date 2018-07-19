#include <stdio.h>
#include <stdlib.h>

int count_common(int A[], int B[], int nA, int nB)
{
	int i = 0, j =0, count = 0;
	
	for(i = 0; i < nA; i++)
	{
		for(j = 0; j < nB; j++)
		{
			if(A[i] == B[j])
			{
				count++;
			}
		}
	}
	return count;
}
int main()
{
	int A[6] = {1, 2, 3, 6, 7, 9};
	int B[5] = {1, 3, 4, 6, 8};
	
	int n;
	n = count_common(A, B, 6, 5);
	printf("How many items were in common: %d\n", n);
}
