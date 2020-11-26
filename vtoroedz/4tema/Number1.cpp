#include <iostream>
using namespace std;
int main()
{
    cout << "Нахождение наименьшего из n произвольных чисел" << endl;
    int i,n;
    float min1,min2;
    cout << "Введите n (сколько чисел будет введено): "; cin >> n;
    float mas[n];
    for (i=0; i<n;++i){cin >> mas[i];cout << mas[i] <<endl;}
    min1=mas[0];
    min2=mas[1];
    for (i= 1;i<n;++i){
        if (mas[i] < min1 && min1 < min2){min1 = mas[i];mas[0] = min1;}
        if (mas[i] < min2){min2 = mas[i];mas[1] = min2;}

        }
    float result = min1*min2;
    cout << "Результат: "<< result << endl;
    return 0;
}
