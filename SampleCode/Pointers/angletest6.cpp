//This is the application program. Compile at the
// very end with the command "g++ angletest.cpp angle.o"


#include <iostream>  
#include "angle.h"
#include <fstream>
#include <cstring>

using namespace std;


void tester1 (int A[], int p, int &q)
{

  cout << "\n In function tester1 \n";
  cout << "q at: " << &q << endl;
  cout << "p at: " << &p << endl;
  cout << " A at: " << &A << endl;
  
  cout << " A contains  " << A << endl;
  cout <<  "A[0] contains" << *A << endl;
  cout << "A[0] at: " << &A[0] << endl;
  cout <<  *(A+2) << endl;
  
}


int main()
{

  // Working with array parameters

  int i, A[3], B[7], j;
  cout << "i at: " << &i << endl;
  cout << "A at: " << &A << endl;
  cout << "B at: " << &B << endl;
  cout << "j at: " << &j << endl;
   
  cout << "B[0] at: " << &B[0] << endl;
  
  B[0] = 23; B[2] = 17;
  tester1(B, i, j);
  tester1(A, j, i);
 
  
}

