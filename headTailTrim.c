#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *head_tail_trim(char *s1, int h, int t)
{
	char *s;
	s = malloc(strlen(s1) * sizeof(s1));
	int i, j = 0;

	if(t < 0 || h < 0 || t+h > strlen(s1))
	{
		return NULL;
	}
	else if(t + h <= strlen(s1) && (t-h) > 0)
	{
		if(h+t != strlen(s1))
		{
			for(i = h; i <= t; i++, j++)
			{
				s[j] = s1[i];
			}
			s[j] = '\0';
		}
		else
		{
			s[j] = '\0';
		}
	}
	else
	{
		s[j] = '\0';
	}
	return s;
}

void main(void)
{
	char c[7] = {"ABCDEFG"};
	char *newC;
	newC = malloc(sizeof(char));
	if(newC == NULL)
	{
		printf("No memory to allocate.\n");
		exit(0);
	}
	
	printf("Old String: %s\n\n", c);
	
	newC = head_tail_trim(c, 2, 3);
	printf("New String for head_tail_trim(c, 2, 3): %s\n", newC);
	
	newC = head_tail_trim(c, 0, 3);
	printf("New String for head_tail_trim(c, 0, 3): %s\n", newC);
	
	newC = head_tail_trim(c, 3, 4);
	printf("New String for head_tail_trim(c, 3, 4): %s\n", newC);
	
	newC = head_tail_trim(c, 5, 4);
	printf("New String for head_tail_trim(c, 5, 4): %s\n", newC);
	
	newC = head_tail_trim(c, -2, 3);
	printf("New String for head_tail_trim(c, -2, 3): %s\n", newC);
}
