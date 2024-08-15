// A simple C++ program

#include <iostream>
using namespace std;

// Program reads alternating sequence of numbers and characters
// starting with a number, ending in 0. Characters should be 'b',
// which follows a black number or 'r', which follows a red number; 
// program will print the sum of the black numbers and the sum of the
// red numbers. 


int main()
{ 
   const int end_flag = 0;
   char color;
   int num, b_sum=0, r_sum=0;
   cout << "Please input, an alternating sequence of numbers and characters\n  starting with a number, ending in 0. Press <enter> after each input token\n";
   cin >> num;
   while (num != end_flag)
    { 
      cin >> color;
      switch (color)
       {
          case 'b': b_sum += num; break;
          case 'r': r_sum += num; break; 
          default : cout << " We have a problem here \n";   
       }
      cin >> num;
    }
   cout << " Black total is " << b_sum << endl;
   cout << " Red total is " << r_sum << endl;
   return 0;
}
