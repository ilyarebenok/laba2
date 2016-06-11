#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <solve.h>

int main()
{
	double a, b, c, x1, x2;
	short status;
	puts("Vvedite a,b,c");
	scanf("%lf %lf %lf", &a, &b, &c);
	if (a == 0)
		printf("\n No roots!");
	else
		status = solve(a, b, c, &x1, &x2);
	if (status == 0)
		printf("\n No real roots!\n ");
	if (status == 1)
		printf("Only one root: x = %4.2f\n", x1);
	if (status == 2)
		printf("Two roots: \n x1 = %4.2f\n x2 = %4.2f\n", x1, x2);
	return 0;
}

