// Шестое задание  (1 тема)

#include <iostream>
using namespace std;
#include <math.h>

int main() {
	double x, y;
	cout << "input x, y: \n";
	cin >> x >> y;
    double w = (tan (x * x + y * y + 1) - pow(2, y - 2 * x)) /  (pow (x * x + y * y + 1, 1.0/4) + fabs (y - 2 * x)) ;
	cout << "w=" << w << endl;
	return 0;
}
