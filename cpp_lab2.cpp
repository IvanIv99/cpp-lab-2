#include <iostream>
#include <math.h>
using namespace std;

double long doublefact(double long n) {
	if (n == 0) {
		return 1;
	}
	if (n == 1) {
		return 1;
	}
	return n * doublefact(n - 2);
}

long double t(long double x) {
	long double a = 0;
	long double b = 0;
	for (int k = 0; k <= 10; k++) {
		b = b + (pow(x, 2 * k + 1) / doublefact(2 * k + 1));
		a = a + (pow(x, 2 * k) / doublefact(2 * k));
	}
	return a / b;
}

int main() {
	long double y;
	long double ans;
	cin >> y;
	ans = (7 * t(0.25) + 2 * t(1 + y)) / (6 - t(y * y - 1));
	cout << ans;
	return 0;
}