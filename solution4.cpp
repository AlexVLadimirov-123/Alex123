#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

vector < int >
StringOfNumbers (const string & input)
{
  
vector < int >numbers;
  
stringstream ss (input);
  
string token;
  
 
if (input.find (',') == string::npos)
{
	  
cout << "No comma?" << endl;
	  
return numbers;
	
}
 
while (getline (ss, token, ','))
	{
	  
int num = stoi (token);
	  
numbers.push_back (num);
	
} 
 
return numbers;

}

int
binarySearch (const vector < int >&arr, int target)
{
  
int left = 0;
  
int right = arr.size () - 1;
  
while (left <= right)
{
	  
int mid = left + (right - left) / 2;
	  
if (arr[mid] == target)
		{
		  
return mid;
		
}
	  else if (arr[mid] < target)
		{
		  
left = mid + 1;
		
}
else
		{
		  
right = mid - 1;
		
}
	
}
  
return -1;

}


 
int
main ()
{
  
string input;
  
cout << "Elements: ";
  
getline (cin, input);
  
 
vector < int >numbers = StringOfNumbers (input);
  
 
if (numbers.empty ())
	{
	  
return 1;
	
}
  
sort (numbers.begin (), numbers.end ());
   
int target;
  
cout << "Enter the number value: ";
  
cin >> target;
  
 
int index = binarySearch (numbers, target);
  
if (index != -1)
	{
	  
cout << "Index of element " << index << endl;
	
}
  else
	{
	  
cout << "Element " << target << " wasn't found" << endl;
	
}  
 
return 0;

}

 
 
