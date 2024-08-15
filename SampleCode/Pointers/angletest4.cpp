//This is the application program. Compile at the
// very end with the command "g++ angletest.cpp angle.o"


#include <iostream>  
#include "angle.h"
#include <fstream>
#include <cstring>

using namespace std;

int main()
{

  // Doing arithmetic with pointers
  // Abusing pointers to violate type safety and program integrity 
  // through pointer arithmetic

  int a; float b; int* pa = &a; angle a1(10, 10, 10); int c;
  int * pc = &c; 
  float *pb = &b; // pb has the address of b

  cout << "a at: " << &a << endl;
  cout << "b at: " << &b << endl;
  cout << "pa at: " << &pa << endl;
  cout << "a1 at: " << &a1 << endl;
  cout << "c at: " << &c << endl;
  cout << "pc at: " << &pc << endl;
  cout << "pb at: " << &pb << endl;


  a = 3; b = 2.5; c = 4;

  cout << "a is: " << a << endl;

  int addr_diff = pa - &c;

  //manipulate a using c.
 
  *(pc + addr_diff) = 352; 

  cout << "a is: " << a << endl; //print a again


  cout << " pb at " << &pb << "  pb is " << pb << 
endl;

   *pb = 26.68; // b is being changed
   cout << "b is: " << b << endl;

  *(pb+1) = 15.53; // pb+1 is the address of a; we are changing 
                   // a to 15.53!!!

  cout << "a is: " << a << endl;

  cout << "b is: " << b << endl;

  

  *(pa-1) = 17; // pa-1 is the address of b; we are changing 
                // b to 17
  cout << "b is: " << b << endl;
}

