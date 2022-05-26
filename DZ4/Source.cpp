#include <iostream>
#include <cmath>
#include "Header.h"

double nvar(double a, double b) {
	double n = 0;
	if (a >= b) {
		n = pow(a - b, 1.0 / 3);
	}
	else {
		n = pow(a, 2.0) + (a - b) / (sin(a * b));
	}
	return n;
	}

double mvar(double a, double b, double n) {
	double m = 0;
	if (n < b) {
		m = ((n + a) / (-1 * b)) + sqrt(pow(sin(a), 2.0) - cos(n));
	}
	else if (n > b) {
		m = pow(b, 3.0) + n * pow(a, 2.0);
	}
	else if (n == b) {
		m = pow(b, 2.0) + sin(n * a) / cos(n * a);
	}
	return m;
}