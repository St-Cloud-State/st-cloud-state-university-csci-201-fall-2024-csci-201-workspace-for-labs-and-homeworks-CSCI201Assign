//This is the application program. Compile at the

// very end with the command "g++ angle1test.cpp angle.o"



#include "angle.h"



#include <iostream>

#include <fstream>

#include <cstring>



using namespace std;


void printList (angle A[], int size, ostream& outfile)
{
  //writes the angles  A[0..size] to the output stream outfile
  for (int i = 0; i < size; i++)
      {A[i].write(outfile); outfile << endl;}
}

bool findMax(angle A[], int size, angle &a)

{

  if (size == 0) return false;



  angle max = A[0];



  for (int i = 1; i < size; i++)

    {

      if (A[i].bigger( max))

	max = A [i];

    }

  a = max; 
  return true;

}




int main()

{



  angle a1, a2, a3(20, 20, 30.5), a4(20, 20, 90.3), 

    a8( 20, 59, 85.3), a5(20, 65, 30.5), a6(60, 65, 40.4),

    a7(380, 71, 98.4), temp;



   cout << " a5"; a5.write(cout); cout << endl;



  a1.write(cout); cout   << endl;

  cout << "Please input angle \n";

  a1.read(cin);

  cout << "new a1 ";  a1.write(cout); cout << endl;

  //cout << "Please input angle \n";

  //cin >> a2;



 

  a1.print();  a2.print();  a3.print();  a4.print();  a5.print();

  a7.print();  a6.print();





  

  if ( a1.bigger(a2))

   {

    temp = a1;

    a1 = a2; a2 = temp;

   }

 
  angle A[3]; 
  A[0] = a1; A[1] = a2; A[2] = a6;
  printList(A, 3, cout);
  cout  << "a1 = "; a1.print();  
  cout << "a2 = " ; a2.print();
  if (findMax(A, 3, temp))
   {
     cout << " Max is: ";temp.print();

   }

}



