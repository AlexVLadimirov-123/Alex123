#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

int
SearchNumbers (const vector < int >arr, int a)
{
  
int l = 0;
  
int r = arr.size () - 1;
  
while (l <= r)
	{
	  
int middle = l + (r - l) / 2;
	  
if (arr[middle] == a)
		{
		  
return middle;
		
}
	  
if (arr[middle] < a)
		{
		  
l = middle + 1;
		
}
	  else
		{
		  
r = middle - 1;
		
}
	
}
  
return -1;

}


 
int
main ()
{
  
int n;
  
 
cout << "Enter the size";
  
cin >> n;
  
 
vector < int >arr;
  
string input;
  
cout << "Elements:";
  
cin.ignore ();
  
getline (cin, input);
  
 
stringstream ss (input);
  
int num;
  
while (ss >> num)
	{
	  
arr.push_back (num);
	  
if (ss.peek () == ',')
		
ss.ignore ();
	
}
  
 
sort (arr.begin (), arr.end ());
  
 
int a;
  
cout << "Enter the number value";
  
cin >> a;
  
 
int index = SearchNumbers (arr, a);
  
if (index != -1)
	{
	  
cout << index << endl;
	
}
  else
	{
	  
cout << "Error" << endl;
	
}
  
 
return 0;

}
