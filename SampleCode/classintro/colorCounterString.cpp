// A simple C++ program

#include <iostream>#include<string>
using namespace std;

// Program reads alternating sequence of numbers and characters
// starting with a number, ending in 0. Characters should be 'b',
// which follws a black number or 'r', which follows a red number; 
// program will print the sum of the black numbers and the sum of the
// red numbers. 


int main()
{ 
   const int end_flag = 0;
   string color;
   int num, b_count=0, r_count=0;
   cout << "Please input an alternating sequence of numbers and strings\n  starting with a number, ending in 0.\n";
   cin >> num;
   while (num != end_flag)
    { 
      cin >> color;
      if (color == "black")
         b_count += num; 
      else if  (color == "red")

	 r_count += num; 
      else
         cout << " We have a problem here \n";   
       
      cin >> num;
    }
   cout << " Black total is " << b_count << endl;
   cout << " Red total is " << r_count << endl;
   return 0;
}
