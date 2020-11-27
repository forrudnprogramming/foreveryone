#include <iostream>
using namespace std;
int main() {
    int month,year;
	cin >> month;
	year = month / 12;
	month = month % year;
	cout << year << " year(s), " << month << " month(s) ";
	return 0;
}
