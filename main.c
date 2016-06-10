#include <stdio.h>
#include <math.h>

int main()
{
	float a,b,c;
	puts("Vvedite a,b,c");
	scanf("%f %f %f", &a, &b, &c");
	if(a != 0 && b != 0 && c != 0)
	{
		float d = b * b - 4 * a * c;
		if(d > 0)
			printf("Yravnenie imeet resheniya %f %f \n", (-b + sqrt(d)) /2 *a, (-b - sqrt(d)) / 2 * a);
		else 
		{
		puts("Yravnenie ne imeet resheniya");
		return 0;
		}
	}
	else 
		puts("Eto ne kvadratnoe yravnenie"); 
	return 0;
}

