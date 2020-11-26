#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
    int n;
    cout << "Сколько вам лет (0<n<100): "; cin >> n;
    if (n>100 || n<0){cout<<"Ты даун ебаный нахуй ты число неправильно ввел блять?";}
        if (n%10 == 1){printf("Ясно автору %i год",n);}
        if (n%10 >=2 && n%10 <=4){printf("Ясно автору %i года",n);}
        if (n%10 >= 5){printf("Ясно автору %i лет",n);}

    return 0;
}
