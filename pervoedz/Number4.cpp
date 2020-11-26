#include <iostream> 
#include <math.h> 
using namespace std; 
int main() { 
 int x1,y1,x2,y2,x3,y3; 
 cin » x1 » y1 » x2 » y2 » x3 » y3; 
 float P; 
 P = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)) + sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2)) + sqrt(pow((x1 - x3), 2) + pow((y1 - y3), 2)); 
 cout « P « endl; 
 float S,p; 
 p = P / 2; 
 S = sqrt(p * (p - sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2))) * (p - sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2))) * (p - sqrt(pow((x1 - x3), 2) + pow((y1 - y3), 2)))); 
 cout « S; 
 return 0;
}
