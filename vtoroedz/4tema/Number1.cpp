#include <iostream>
#include <stdio.h>
//#include <stdlib.h>
using namespace std;
/*int comp1 (const void * a, const void * b)
{
    return ( *(float*)a - *(float*)b );
}
 */
int main()
{
    cout << "Нахождение наименьшего из n произвольных чисел" << endl;
    int i,n,j;
    int lmao;
    float min1,min2;
    cout << "Введите n (сколько чисел будет введено): "; cin >> n;
    float mas[n];
    for (i=0; i<n;++i){cin >> mas[i];cout << mas[i] <<endl;}
    for (i=0; i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if (mas[j]>mas[j+1]){lmao=mas[j];mas[j] = mas[j+1];mas[j+1]=lmao;}
        }
    }
//    qsort (mas, n, sizeof(float), comp1);
    min1=mas[0];
    min2=mas[1];

/*    for (i=0;i<n;++i){
        if (mas[i] < min1){min1 = mas[i];mas[0] = min1;}
//        if (min2 > min1 && mas[i] < min2){min2 = mas[i];mas[1] = min2;}

    }
    printf("\n");
    for (i=0; i<n;++i){cout << mas[i] <<endl;}
    for (i=1;i<n;++i) {
        if (mas[i] < min2){min2 = mas[i];mas[1] = min2;}
*/

    float result = min1*min2;
    cout<<"\n";
    for (i=0; i<n; i++){cout<<mas[i]<<endl;}
    cout << "Результат: "<< result << endl;
    return 0;
}
