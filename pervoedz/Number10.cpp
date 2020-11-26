#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n <= 99: ";
    cin >> n;
    int k;
    cout << "Enter k: ";
    cin >> k;
//  оператор выбора
    n < 10 ? n += k * 10 : n += k * 100;
    n *= 10;
    n += k;
    cout << n;
    return 0;
}
