#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *str_even_pos(char *s1)
{
	int i, length, j = 0, count = 0;
	char *s;
	
	length = strlen(s1);
	s = malloc(sizeof(length));
	if( s == NULL)
	{
		printf("No memory to allocate.\n");
		exit(0);
	}
	
	for(i = 0; i < length; i++)
	{
		if(i % 2 == 0)
		{
			s[j] = s1[i];
			j++;
		}
	}
	return s;
}

void main(void)
{
	char c[26] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char *newC;
	newC = malloc(sizeof(char));
	if(newC == NULL)
	{
		printf("No memory to allocate.\n");
		exit(0);
	}
	
	printf("Old String: %s\n", c);
	
	newC = str_even_pos(c);
	
	printf("New String: %s", newC);
	
}
