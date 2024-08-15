// A simple C++ program

#include <iostream>
using namespace std;

// Program reads alternating sequence of numbers and characters
// starting with a number, ending in 0. Characters should be 'b',
// which follws a black number or 'r', which follows a red number; 
// program will print the sum of the black numbers and the sum of the
// red numbers. 

char getCode()
{
   char code;
   cin >> code;
   while ((code != 'b') && (code != 'r'))
    {
      cout << "Color code should be 'b' or 'r' \n";
      cin >> code;
     }
   return code;
}

int main()
{ 
   const int end_flag = 0;
   char color;
   int num, b_count=0, r_count=0;
   cin >> num;
   while (num != end_flag)
    { 
      color = getCode();
      switch (color)
       {
          case 'b': b_count += num; break;
          case 'r': r_count += num; break; 
          default : cout << " We have a problem here " << endl;   
       }
      cin >> num;
    }
   cout << " Black total is " << b_count << endl;
   cout << " Red total is " << r_count << endl;
   return 0;
}
