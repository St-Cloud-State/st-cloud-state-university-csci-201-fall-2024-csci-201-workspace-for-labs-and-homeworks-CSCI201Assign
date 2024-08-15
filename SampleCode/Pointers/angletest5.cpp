//This is the application program. Compile at the
// very end with the command "g++ angletest.cpp angle.o"


#include <iostream>  
#include "angle.h"
#include <fstream>
#include <cstring>

using namespace std;

int main()
{

  // Working with arrays
   int i, k; double x;
  int A[3],  B[7], j, C[4];
 
 
  cout << "i at: " << &i << endl;
cout << "k at: " << &k << endl;
 cout << "x at: " << &x << endl;
  cout << "A at: " << &A << endl;
  cout << "B at: " << &B << endl;
  cout << "j at: " << &j << endl;

 
 


  A[0] = 23; A[2] = 17;
  cout << "A[0] is :" << A[0] << endl;
  cout << "A[2] is :" << A[2] << endl;

  *A = 19; *(A+2) = 13; // change A[0] and A[2] using A's address. 

  cout << "A[0] is :" << A[0] << endl;
  cout << "A[2] is :" << A[2] << endl;
  
}

