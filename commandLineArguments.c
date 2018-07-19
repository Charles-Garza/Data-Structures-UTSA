#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i = argc;
	int sum = 0;

	if(i == 1)
	{
		printf("Sum = %d\n", sum);
		return sum;
	}

	while(i-- > 1)
	{
		sum += atoi(argv[i]);
	}

	printf("Sum = %d\n", sum);
	return sum;
}
