

#include<stdio.h> 
#include<math.h> 
//Ввести координаты двух точек и найти расстояние между ними 
int main() { 
    printf ("Calculate the distance between (x1,y1) and (x2,y2)\n"); 
    int x1, y1, x2, y2; 
//Тут вводим 
    printf("Input x1 and y1: "); 
    scanf("%d%d", &x1,&y1); 
    printf("Input x2 and y2: "); 
    scanf("%d%d", &x2,&y2); 
//Тут считаем и выводим 
    printf("Distance is %5.2f",sqrt(pow((x2-x1),2)+pow((y2-y1),2)));
}
