#include <stdio.h>
#include <stdlib.h>

 /* suppose all the other standard libraries are included here as well */
typedef struct {
 int ID;
 int NumD;
 int *hours; /* a dynamic array to store # of hours this employee worked in each day.*/
} empT;

int main(void)
{
 FILE *infp;
 int NumEmp, ID, NumD, hour;
 int i, j; /* if needed you can declare other variables here */
 empT *E;
 
 if ((infp = fopen("emp.txt", "r"))==NULL)
 {
 	printf("Input file cannot be opened\n");
 	return -1;
 }
 if(fscanf(infp, "%d", &NumEmp)!=1) 
 	exit(0);
 
 E = (empT *)malloc(sizeof(E) * NumEmp);
 
 for(i = 0; i < NumEmp; i ++)
 {
	fscanf(infp, "%d", &E -> ID);
 	fscanf(infp, "%d", &E -> NumD);
 	E -> hours = malloc(E -> NumD * sizeof(int));
 	
 	printf("ID: %d\n", E -> ID);
 	printf("Num of days: %d\n", E->NumD);
 	printf("hours: ");
 	
 	for(j = 0; j < E -> NumD; j++)
 	{
 		fscanf(infp, "%d", &E -> hours[j]);
 		printf("%d ", E -> hours[j]);
	}
	printf("\n");
 }
}
