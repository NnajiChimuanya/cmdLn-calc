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

	switch(operator)
	{
		case '/':
			ans = a / b;
			break;
		case '+':
			ans = a + b;
			break;
		case '-':
			ans = a - b;
			break;
		case '^':
			ans = pow(a, b);
			break;
		default:
			goto fail;
	}

	printf("%f %c %f Equals to %.5f \n\n", a, operator, b, ans);
	goto exit;

fail:
	printf("Operation Failed. \n");
exit:
	return 0;
}
