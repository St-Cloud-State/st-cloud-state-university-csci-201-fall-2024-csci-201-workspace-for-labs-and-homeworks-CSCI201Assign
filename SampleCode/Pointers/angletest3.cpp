//This is the application program. Compile at the
// very end with the command "g++ angletest.cpp angle.o"

#include "angle.h"
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{

  //looking at allocations for arrays of char

  int a; char c1[10]; 
  int x1; int x3 = 5; 
  int x2; char c2[5]; 
  int y; char c3[16]; int z; 
  
 
  cout << "a at: " << &a << endl;
  cout << "c1 at: " << &c1 << endl;
  cout << "x1 at: " << &x1 << endl;
  cout << "x2 at: " << &x2 << endl;
  cout << "c2 at: " << &c2 << endl;
  cout << "y at: " << &y << endl;
  cout << "c3 at: " << &c3 << endl;
  cout << "z at: " << &z << endl;

  char c4[8], c5[9];
  strcpy(c4, "1234");
  cout << " c4 is " << c4 << endl;
  strcpy(c5, "12345678123456789");
  cout << " c4 is " << c4 << endl;
  cout << "c4 at: " << &c4 << endl;
  cout << "c5 at: " << &c5 << endl;
}

