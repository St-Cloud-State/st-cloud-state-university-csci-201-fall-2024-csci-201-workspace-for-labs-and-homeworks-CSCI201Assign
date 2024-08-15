// compile with "g++ -c colorClass.cpp"
// i.e., compile without linking. This will
// create an executable file colorClass.o

#include <cstdlib>
#include <string>
#include "colorClass.h"
// Program reads alternating sequence of numbers and characters
// starting with a number, ending in 0. Characters should be 'b',
// which follws a black number or 'r', which follows a red number; 
// program will print the sum of the black numbers and the sum of the
// red numbers. 


void colorClass::run(istream& infile)
{ 
   const int end_flag = 0;
   string color;
   int num, b_count=0, r_count=0;
   
   infile >> num;
   while (num != end_flag)
    { 
      infile >> color;
      if (color == "black")
         b_count += num; 
      else if  (color == "red")

	 r_count += num; 
      else
         cout << " We have a problem here \n";   
       
      infile >> num;
    }
   cout << " Black total is " << b_count << endl;
   cout << " Red total is " << r_count << endl;
   
}
