//This is the application program. Compile at the
// very end with the command "g++ angletest.cpp angle.o"

#include "angle.h"
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{
  int x; int y; int *xp, *yp;
  int p; angle a1(20,20,20), a2(20,20,20);
  int &z = x;
  cout << "x at: " << &x << endl;
  cout << "y at: " << &y << endl;
  cout << "z at: " << &z << endl;
//  cout << "xp  is: " << xp << endl;

  xp = &x; yp = &y;
  cout << "xp  at: " << &xp << endl;

  cout << "yp at: " << &yp << endl;
  cout << "xp  is: " << xp << endl;
  cout << "yp is: " << yp << endl;
  cout << "p at: " << &p << endl;
  cout << "a1 at: " << &a1 << endl;
  cout << "a2 at: " << &a2 << endl;
  a2.print();
  cout << "z at: " << &z << endl;  
}

