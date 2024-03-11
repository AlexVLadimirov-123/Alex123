#include <iostream>
using namespace std;
void
gh (int a, int b, int c)
{
  cout << a << endl;
  cout << b << endl;
  cout << c << endl;
}

int
main ()
{
  int a, b, c;
  char p;
  cout << "Enter the a,b,c";
  cin >> a >> p >> b >> p >> c;
  gh (a, b, c);
  return 0;
}
