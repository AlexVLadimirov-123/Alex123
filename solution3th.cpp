#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

vector < int > StringOfnumbers (const string & input)
{
  
vector < int > numbers;
  
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


 
int main ()
{
  
string inputString;
  
cout << "Enter the a, b, c";
  
getline (cin, inputString);
  
vector < int > result = StringOfnumbers (inputString);
  
return 0;

}
