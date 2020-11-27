#include <iostream> 
#include <stdio.h> 
using namespace std; 
 
int main() 
{ 
 float a, b; 
 int pi; 
 pi = 3,14; 
 printf("Enter the area of the circle: "); 
 scanf("%f", &a); 
 printf("Enter the quare area: "); 
 scanf("%f", &b); 
 cout << "the area of the circle: " << a << endl; 
 cout << "the quare area: " << b << endl; 
 if (b*pi <= 2 * a) 
 { 
 cout << "Fit" << endl; 
 } else 
 { 
 cout << " Not fit" << endl; 
 } 
 return 0; 
}
