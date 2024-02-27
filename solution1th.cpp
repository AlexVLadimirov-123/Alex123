include <iostream>
include <stdlib>
int main()
{
    int massive [4]={};
    for ( int i=1; i<4; i++)    
    {
massive[i] = rand() % 40; 
std::cout << massive [i]; 
     }
return 0;
 }
