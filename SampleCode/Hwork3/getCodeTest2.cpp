// A  C++ program that tests the function 
// getCode. The input can only be 'b' or 'r'.

#include <iostream>
using namespace std;

char getCode()
{
   char code;
   do
    {
      cout << "Please input a  'b' or 'r' \n";
      cin >> code;
     }
   while ((code != 'b') && (code != 'r'));

   return code;
}

int main()
{ 
   char ch;
   ch = getCode();// calling function to read the letter code
   cout << "Result is " << ch << endl;
   return 0;
}
