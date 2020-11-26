#include <iostream> 
#include <math.h> 
using namespace std; 
int main() { 
  float a,b; 
  cin >> a >> b; 
  a = sqrt((a * 4) / 3.1415); 
  b = sqrt(b); 
  if (a <= b) {cout << "Yes";} 
  else {cout << "No";} 
return 0; 
}
