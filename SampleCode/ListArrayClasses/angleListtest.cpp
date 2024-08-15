//This is the application program. Compile at the
// very end with the command "g++ angleListtest.cpp angle.o angleList.o"
#include "angle.h"
#include "angleList.h"
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{

  int size;

  angleList aList(10);//create the list object
  angleList bList(2);
  ifstream infile;

  angle a1, a2, a3(20, 20, 30.5), a4(20, 20, 90.3), 
    a8( 20, 59, 85.3), a5(20, 65, 30.5), a6(60, 65, 40.4),
    a7(380, 71, 98.4), temp;

  if (aList.findMax(a1))  {
    cout  << "Max is "  << endl; 
    a1.write(cout);    cout << endl;
  }
  else 
  {    
    cout << "no max found \n";
  }


  // add some angles to the list object 
  aList.addAngle(a3);   
  aList.addAngle(a4); 
  aList.addAngle(a8);
  aList.addAngle(a5);
  aList.addAngle(a6);
  aList.addAngle(a7);

  //find the largest angle
  
  aList.printList(cout);
  if (aList.findMax(a1))
  {
    cout  << "Max is "  << endl; 
    a1.write(cout);
    cout << endl;
  }
  else 
  {
    cout << "no max found \n";
  }
  infile.open("afile.txt");
  while ((temp.read(infile)) && (bList.addAngle(temp)));
  bList.printList(cout);
}

