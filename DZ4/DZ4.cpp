#include <iostream>
#include <cmath>
#include "Header.h"

using namespace std;

int main() {

	setlocale(0, "rus");
	double a = 4.8, b = -7.9;
	double m, n;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	n = nvar(a, b);
	cout << "n = " << n << endl;
	m = mvar(a, b, n);
	cout << "m = " << m << endl;

}