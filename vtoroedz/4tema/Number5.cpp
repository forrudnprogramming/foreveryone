#include <iostream>
#include <math.h>
using namespace std;
int main() {
    float a,b,c,D,x1,x2,x; 
    cin >> a >> b >> c;
    D = pow(b , 2) - (4 * a * c);
    if (D > 0) {
    	x1 = ((-b + sqrt(D)) / (2 * a));
		x2 = ((-b - sqrt(D)) / (2 * a));
		cout << "Your equation has two solutions: " << x1 << " and " << x2;
}   else if (D == 0) {
		x = ((-b) / (2 * a));
		cout << "Your equation has one solution: " << x;
}   else {
    	cout << "Your equation has no solutions";
}
    return 0;
}
