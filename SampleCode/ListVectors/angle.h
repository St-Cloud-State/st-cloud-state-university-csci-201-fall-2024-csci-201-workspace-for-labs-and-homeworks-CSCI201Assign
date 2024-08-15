
#include <fstream>
using namespace std;
#include <iostream>
#include <cstring>
#ifndef ANGLE
#define ANGLE
// angle.h

class angle {
 private:

  
  int degree;
  int minute;
  float second;
  void simplify();

 public: 

  // constructor
  angle(int d = 0, int m = 0, float s = 0)
    {
      degree  = d; minute = m; second = s;
	simplify();
    }
  
 //  accessor methods 
  int getdegree() {return degree;}
  
  int getminute() {return minute;}
  
  float getsecond() {return second;}

  // additional detailed print method
  void print(){
    cout << "degree  " << degree << ";  minute " << minute
	 << ";  seconds " << second << endl;
  }

  // Operators
  angle add(const angle right);
  bool bigger (const angle right);
  bool  read(istream&);
  void  write(ostream&);

};
#endif

