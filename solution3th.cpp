#include <sstream>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int *
gh (int a, int b, int c) 
 { 
int *arr = new int[3];
  
arr[0] = a;
  
arr[1] = b;
  
arr[2] = c;
  
for (int i = 0; i < 3; i++)
	
	{
	  
cout << arr[i] << endl;
	
} 
return arr;

}


 
int 
main () 
 { 
int a, b, c;
  
cout << "Enter the a,b,c";
  
scanf ("%d, %d, %d", &a, &b, &c);
  
int *arr = gh (a, b, c);
  
return 0;

}

 
int 
main () 
 { 
int a, b, c;
  
cout << "Enter the a,b,c";
  
cin >> a >> b >> c;
  
scanf ("%d, %d, %d", &a, &b, &c);
  
int *arr = gh (a, b, c);
  
 
return 0;

}
