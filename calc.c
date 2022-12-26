#include <stdio.h>
#include <math.h>

int main (int argc, char *argv[]) 
{
	float a;
	float b;
	float ans;
	char operator;


	printf("Enter Calculation:... \n");
	printf("Syntax : A operator B \n\n");
	scanf("%f %c %f", &a, &operator, &b);

	printf("You inputed; %.6f %c %6f", a, operator, b);
	return 0;
}
