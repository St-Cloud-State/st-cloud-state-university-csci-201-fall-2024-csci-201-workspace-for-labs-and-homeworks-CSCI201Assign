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

int main()
{
   ifstream infile, infile2;
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
  infile2.open("bfile.txt");
  angle A[3]; 
  //A[0].read(cin); A[1] = a2;
  int i = 0;
  while (i < 3)
  {
    if(A[i].read(infile2))
     i++;
    else
     break;
  }
  cout << i << " items read" << endl;
  printList(A, 2, cout);
  cout  << "a1 = "; a1.print();  
  cout << "a2 = " ; a2.print();
  infile.open("afile.txt");
  if (a1.read(infile))
    { cout<< "\n \n angle read "; a1.write(cout);}
  else 
    cout<< "\n \n Read failed \n";

  if (a1.read(infile))
    { cout<< "\n \n angle read "; a1.write(cout);}
  else 
    cout<< "\n \n Read failed \n";
}

