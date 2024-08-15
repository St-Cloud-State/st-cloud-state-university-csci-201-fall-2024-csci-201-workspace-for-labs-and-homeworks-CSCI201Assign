//This is the application program. Compile at the
// very end with the command "g++ triangleTest.cpp triangle.o"

#include "triangle.h"

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{

  triangle t1, t2, t3(15, '#', 20, 10); 
  cout << " data for t1 is ";
  t1.write(cout); 
  cout   << endl;

  cout << " data for t3 is "; 
  t3.write(cout); 
  cout   << endl;
  cout << "Please input data for triangle t1 \n";
  t1.read(cin);
  cout << "new t1 ";  t1.write(cout); cout << endl;
 
  cout << " drawing t1 \n";
  t1.draw(cout); cout << endl;

  cout << " drawing t2 \n";
  t2.draw(cout); cout << endl;
 
  cout << " drawing t3 \n";
  t3.draw(cout); cout << endl;

  t2.setheight(20); t2.settopmargin(20); t2.setleftmargin(20);
  cout << " data for t2 is ";
  t2.write(cout); 
  cout   << endl;

  cout << " drawing t2 \n";
  t2.draw(cout); cout << endl;
  
 
}

