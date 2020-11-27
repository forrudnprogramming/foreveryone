#include <iostream>
using namespace std;
int main() {
    int N;
	cin >> N;
	if (N == 1 || N == 3 || N == 5 || N == 7 || N == 8 || N == 10 || N == 12) {
		cout << 31;
}
	if (N == 2) {
		cout << 28;
}
	if (N == 4 || N == 6 || N == 11) {
		cout << 30;
}
	return 0;
}
