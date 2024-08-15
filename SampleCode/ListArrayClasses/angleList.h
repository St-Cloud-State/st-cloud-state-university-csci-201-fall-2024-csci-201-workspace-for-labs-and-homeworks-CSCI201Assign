
#include <fstream>
using namespace std;
#include <iostream>
#include <cstring>
#include "angle.h"
#ifndef ANGLELIST
#define ANGLELIST
// angleList.h

class angleList {
 private:
  angle angleArray[20];// an array of angles
  int count;
  int maxNum;

 public: 
  
  // constructor
  angleList(int max = 20)
    {
      maxNum= max; count = 0;
    }
  
 // modifier methods
  bool addAngle(angle a);

  // Prints the angles, one per line
  void printList(ostream& outfile);
 
  // If there are no angles, returns false; otherwise 
  // places largest angle in a and returns true.
  bool findMax(angle& a);

  
};
#endif

