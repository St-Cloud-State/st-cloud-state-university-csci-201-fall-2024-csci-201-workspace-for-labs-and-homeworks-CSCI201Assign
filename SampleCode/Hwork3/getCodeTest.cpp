// A  C++ program that tests the function 
// getCode. The input can only be 'b' or 'r'.

#include <iostream>
using namespace std;

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
   char ch;
   ch = getCode();// calling function to read the letter code
   cout << "Result is " << ch << endl;
   return 0;
}
