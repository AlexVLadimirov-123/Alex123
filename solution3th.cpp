#include <string>
#include <vector>
#include <sstream>
#include <iostream>
using namespace std;
int*gh(char a, char b, char c)
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
     char a,b,c;
     string str;
     cout << "enter the a, b, c";
     cin >> str;

stringstream test("a, b, c");
string segment;
vector<string> seglist;

while(getline(test, segment, ','))
{
   seglist.push_back(segment);
}

int *arr = gh (a, b, c);
return 0;

}
