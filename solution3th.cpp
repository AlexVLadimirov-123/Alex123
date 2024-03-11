#include <iostream>
#include <sstream>
#include <vector>
#include <cstdio>
using namespace std;

int *
gh (int a, int b, int c) 
 { 
int *arr = new int[3];
  
arr[1] = a;
  
arr[2] = b;
  
arr[3] = c;
  
for (int i = 1; i <= 3; i++)
	
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
  
cin >> a >> b >> c;
  
scanf ("%d, %d, %d", &a, &b, &c);
  
int *arr = gh (a, b, c);
  
 
return 0;

}
