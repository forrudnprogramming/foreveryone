// Второе задание (первое дз)

#include<stdio.h>
#include<math.h>
// можно через потоковый вывод, тогда нужно подключить библиотеку iostream и юзать cin >> ...;
int main() {
    float a, b, alf, p, s, h;
    printf("Enter a: ");
    scanf("%f", &a);
    printf("Enter b: ");
    scanf("%f", &b);
    printf("Enter alf: ");
    scanf("%f", &alf);
    h=(a-b)/2*tan(alf);
    p=a+b+2*h/sin(alf);
    s=(a+b)/2*h;
    printf("p=%f\n",p);
    printf("s=%f\n",s);
    return 0;
}
