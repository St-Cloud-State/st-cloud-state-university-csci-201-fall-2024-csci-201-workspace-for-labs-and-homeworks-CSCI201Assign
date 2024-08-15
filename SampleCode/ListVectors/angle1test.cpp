//This is the application program. Compile at the
// very end with the command "g++ angle1test.cpp angle.o"

#include "angle.h"

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{

  angle a1, a2, a3(20, 20, 30.5), a4(20, 20, 90.3), 
    a8( 20, 59, 85.3), a5(20, 65, 30.5), a6(60, 65, 40.4),
    a7(380, 71, 98.4), temp;

   cout << " a5" << a5 << endl;

  cout  << a1 << endl;
  cout << "Please input angle \n";
  cin >> a1;
  cout << "new a1 " << a1 << endl;
  cout << "Please input angle \n";
  cin >> a2;

 
  a1.print();  a2.print();  a3.print();  a4.print();  a5.print();
  a7.print();  a6.print();

  a2 = a2+a3;   cout << a2 << endl;
  a2 = a3 + a4;   a2.print();

  a2 = a1 + angle(90, 80, 70.5); //add a constant angle to a1 
   a2.print();
  a2.setdegree(412);   a2.print();
  a2.setminute(412);   a2.print();
  a2.setsecond(412);   a2.print();

  cout  << "a1 = " << a1  << "; a2 = " << a2 << endl;
  
  if (a2 > a1)
  {
    temp = a1;
    a1 = a2; a2 = temp;
  }
  cout  << "a1 = " << a1  << "; a2 = " << a2 << endl;

}

