// compile with "g++ -c angleList.cpp"
// i.e., compile without linking. This will
// create an executable file angleList.o

#include <iostream>
#include <vector>
#include <cstdlib>
#include "angle.h"
#include "angleList.h"

bool angleList::addAngle(angle a)
{ 
  if (angList.size() >= maxNum)
    { 
      // we have run out of space
      return false;
    }
  else 
    {
		angList.push_back(a);
		return true;  
    }
}

void angleList::printList(ostream& outfile)
{
  for(unsigned int index = 0; index < angList.size(); index++)
    {       
      (angList.at(index)).write(outfile);
       outfile << endl;
    }
   
}

bool angleList::findMax(angle &a)
{
  if (angList.size() == 0) return false;
  angle max = angList.at(0);
  for (unsigned int i = 1; i < angList.size(); i++)
  {
     if ((angList.at(i)).bigger( max))
		max = angList.at(i);
   }
  a = max; 
  return true;
}
