#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

vector < int >
StringOfNumbers (const string & input) 
 { 
 
vector < int >numbers;
  
 
stringstream ss (input);
  
 
string token;
  
 
 
while (getline (ss, token, ','))
	
	{
	  
 
int num = stoi (token);
	  
 
cout << num << endl;
	  
 
numbers.push_back (num);
	
 
} 
 
return numbers;

 
}


 
int SearchNumbers (const vector < int >&arr, int a)
{
  
int l = 0;
  
int r = arr.size () - 1;
  
while (l <= r)
	{
	  
int mid = l + (r - l) / 2;
	  
if (arr[mid] == a)
		{
		  
return mid;
		
}
	  
if (arr[mid] < a)
		{
		  
l = mid + 1;
		
}
	  else
		{
		  
r = mid - 1;
		
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
  
vector < int >inputArray;
  
cout << "Elements:";
  
int num;
  
std::string input;
  
std::cin.ignore ();
  
std::getline (std::cin, input);
  
inputArray = StringOfNumbers (input);
  
 
int a;
  
cout << "Enter the number value";
  
cin >> a;
  
int index = SearchNumbers (inputArray, a);
  
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


 
 
 
 
