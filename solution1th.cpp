#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
int size;
cout << "Enter the size of arrray";
cin >> size;
int array [size]={};
for ( int i=1; i<=size; i++)    
    {
array[i] = rand() % 80; 
cout << array [i] << endl;
    }
return 0;
 }
