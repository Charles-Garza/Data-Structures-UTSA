#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *lastname_firstname(char *FN, char *LN)
{
	int i, j = 0;
	char *s;
	
	s = malloc(sizeof(char));
	if(s == NULL)
	{
		printf("No memory to allocate.\n");
		exit(0);
	}
	printf("First, last name: %s, %s\n", FN, LN);
	
	for(i = 0; i < strlen(LN); i++)
	{
		s[i] = LN[i];
	}
	
	for(i = strlen(LN); i < strlen(LN) + strlen(FN); i++,j++)
	{
		s[strlen(LN)] = ',';
		s[strlen(LN)+1] = ' ';
		s[i+2] = FN[j];
	}
	return s;
}

//Works with any name!
void main()
{
	char *ns;
	ns = malloc(sizeof(char));
	if(ns == NULL)
	{
		printf("No memory to allocate");
	}
	
	ns = lastname_firstname("Turgay", "Korkmaz");
	
	printf("Last, first name: %s\n", ns);	
}
