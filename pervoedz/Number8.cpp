#include <iostream>
using namespace std;
int main() {
    int s,d,e,t;
    cout << "\nInput t:  ";
    cin >> t;
    e = t %10;
    t /= 10;
    d = t %10;
    s = e + d;
    cout << "\nSum = " << s ;
    return 0;
}
