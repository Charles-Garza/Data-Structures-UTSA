#include <stdio.h>
#include <stdlib.h>

typedef struct point 
{
 	int x;
 	int y;
} pointT;

typedef struct rect 
{
	pointT loc; /* loc: location */
	int w, h; /* w: width, h: height */
} rectT;

void Get_loc_w_h_Rectangles(rectT **R, int num_r);

main()
{
 	rectT **R;
 	int num_r, i, j;
 	printf("Enter the number of rectangles :");
 	scanf("%d", &num_r);
	R = (rectT **) malloc(num_r * sizeof(rectT *));
 	if (R==NULL) exit(-1);
 	for(i=0; i < num_r; i++) 
	{
 		R[i] = (rectT *) malloc(sizeof(rectT));
 		if (R[i] ==NULL) exit(-1);
 	}

	Get_loc_w_h_Rectangles(R, num_r); 
	
	for(j = 0; j < num_r; j++)
	{
		printf("Location of (X, Y) at R[%d]: (%d, %d)\n", j, R[j] -> loc.x, R[j] -> loc.y);
		printf("Value of the height at R[%d]: %d\n", j, R[j] -> h);
		printf("Value of the width at R[%d]: %d\n", j, R[j] -> w);
	}
}

void Get_loc_w_h_Rectangles(rectT **R, int num_r )
{
	int i;
	
	for(i = 0; i < num_r; i++)
	{
		printf("Enter the location of x: ");
		scanf("%d", &R[i]->loc.x);
		printf("Enter the location of y: ");
		scanf("%d", &R[i]->loc.y);
		printf("Enter the height: ");
		scanf("%d", &R[i] -> h);
		printf("Enter the width: ");
		scanf("%d", &R[i] -> w);
	}
}
