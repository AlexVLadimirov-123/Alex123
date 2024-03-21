//
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int
main () 
 { 
int a, b, r, x, y;
  
cout << "Enter the x, y";
  
cin >> x >> y;
  
cout << "Enter the geometry size of rectangle (a (heght) and b (vidth))";
  
cin >> a >> b;
  
cout << "Enter the radius of circle";
  
cin >> r;
  
if (r < abs (x) < (a / 2) && r < abs (y) < (b / 2))
	
	{
	  
cout << "The point is locate inside specified aria";
	
}
  
  else
	
	{
	  
cout << "The point is locate outside cpecified aria";
	}
  
return 0;

}

