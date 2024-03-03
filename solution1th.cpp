#include <iostream>
#include <cstdlib>
int main()
{
int size;
std::cout << "Enter the size of arrray";
std::cin >> size;
int array [size]={};
for ( int i=1; i<=size; i++)    
    {
array[i] = rand() % 9; 
std::cout << array [i]; 
    }
return 0;
 }
