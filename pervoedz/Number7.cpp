/*

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int seconds = t % 60;
    t /= 60;
    int minutes = t % 60;
    t /= 60;
    cout << t << " Hours " << minutes << " Minutes " << seconds << " Seconds";
    return 0;
}
*/
//                 Мой код



#include <stdio.h>
int main()
{
    int t ;
    scanf("%d",&t);
    if (t>86400) {
        printf("Вы ввели больше суточного лимита секунд!");
        return 0;
    }
    else if (t<0) {
        printf("Вы ввели отрицательное кол-во секунд");
        return 0;
    }
    int seconds = t % 60;
    t /= 60;
    int minutes = t % 60;
    t /= 60;
    printf(" %d Hours\n %d Minutes\n %d Seconds\n",t,minutes,seconds);
    return 0;
}
