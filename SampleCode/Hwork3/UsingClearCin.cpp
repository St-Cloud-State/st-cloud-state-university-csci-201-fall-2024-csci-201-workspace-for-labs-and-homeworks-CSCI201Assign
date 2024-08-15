// A simple C++ program
#include <iostream>

using namespace std;

int main()

{
   float y;
   cout << "Please input a float value \n ";
   cin >> y;
   while (!cin)
   {
      cin.clear();
      cin.ignore(200, '\n');
      cout <<  "Please try  again "<< endl;
      cin >> y;

   }
   cout << "Your float is  " << y << endl;
   return 0;
}
