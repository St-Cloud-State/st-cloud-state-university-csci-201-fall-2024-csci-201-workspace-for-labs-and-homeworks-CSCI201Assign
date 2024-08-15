#include "angle.h"
#include "angleListQ.h"
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{
  angleListQ aList(4);//create the list object with maximum size of 4 
  int result;
  //define angles
  angle  a3(20, 20, 30.5), a4(20, 20, 90.3), 
    a8( 20, 59, 85.3), a5(20, 65, 30.5), a6(60, 65, 40.4);

  aList.addAngle(a3);   
  aList.addAngle(a4); 
  aList.addAngle(a8);
  aList.addAngle(a5);
  aList.addAngle(a6);

  // print to screen all the angles in the list
  aList.printList(cout);
  result =  aList.search(a6);  //searching for a6
  cout << "a6 found at position: " << result << endl;
  result =  aList.search(a4); //searching for a4
  cout << "a4 found at position: " << result << endl;
}

