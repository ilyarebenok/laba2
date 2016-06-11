#include <stdio.h>
#include <math.h>
#include <solve.h>

const double eps = 1e-10;
const short ERROR = -1;
const short NO_ROOTS = 0;
const short ONE_ROOT = 1;
const short TWO_ROOTS = 2;

int equal(double a, double b, double eps) {
    return fabs(a - b) < eps;
}

short solve(double a, double b, double c, double *x1, double *x2) {
	double d;        
	d = ( b * b) - ( 4 * a *c );
	if (d < 0)
		return NO_ROOTS;
        if (equal(d, 0, eps)) {
                *x1 = -b / (2 / a);
                return ONE_ROOT;
        }
	if (d > 0) {
		*x1 = (-b - sqrt(d)) / (2 * a);
		*x2 = (-b + sqrt(d)) / (2 * a);
		return TWO_ROOTS;
	}
	return ERROR;
}
