//функция для универа//

#include <iostream>
#include <math.h>
using namespace std;

int
main () 
 { 
double x, y;
  
float f;
  
float e = 2.7;
  
cout << " Enter the x, y";
  
cin >> x >> y;
  
if (x + y > 0 && x > pow (y, 2))
	
	{
	  
f = exp (x + y);
	  
cout << f;
	
}
  
  else
  
if 
(x + y <= 0 || x == pow (y, 2))
	
	{
	  
f = exp (-x - y);
	  
cout << f;
	
}
  
  else
	
f = exp (x - y);
  
cout << f;
  
return 0;

}
