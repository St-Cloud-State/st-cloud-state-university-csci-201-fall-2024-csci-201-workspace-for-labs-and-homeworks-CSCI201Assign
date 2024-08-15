//This is the application program. Compile at the
// very end with the command "g++ angletest.cpp angle.o"


#include <iostream>  
#include "angle.h"
#include <fstream>
#include <cstring>

using namespace std;



int main()
{

  // Working with dynamic allocation
  //space is allocated on the "heap" by calling "new"

  int *pi, *pj; int size;
  angle *pa1, *pa2;
  cout << "pi at: " << &pi << endl;
  cout << "pj at: " << &pj << endl;
  cout << "pa1 at: " << &pa1 << endl;
  cout << "pa2 at: " << &pa2 << endl;
  
  cout << "pi is: " << pi << endl;
  cout << "pj is: " << pj << endl;
  cout << "pa1 is: " << pa1 << endl;
  cout << "pa2 is: " << pa2 << endl;
 // cout << "angle pa1 is " << *pa1 << " stored at " << pa1<< endl;

  cout << "Please input size of array: ";
  cin >> size;   

  pi = new int(size); //array of ints  created at run time
  
  *(pi+ 95) = 23;
//  pi[965578] = 78;
   cout << pi[95] << endl;
  // cout << pi[965578] << endl;
  cout << "pi is: " << pi << endl;
  pi[8] = 25;
  pi[16] = 50;

  pa1 = new angle(20, 30, 90);
  cout << "angle pa1 is ";
  (*pa1).write(cout);
  cout  << " stored at " << pa1<< endl;

  pa1 = new angle(20, 50, 90);
  cout << "angle pa1 is :" ;
  (*pa1).write(cout);
  cout  << " stored at " << pa1<< endl;

  (*pa1).setminute(98); // applying a method through an object pointer
  cout << "angle pa1 is " ;
  (*pa1).write(cout);
  cout  << endl;

  pa1->setminute(163); // replacing * and . by the -> operator
  cout << "angle pa1 is ";
  (*pa1).write(cout);
  cout  << endl;
  cout << pi[8] << "   " << pi[16] << endl;
}

