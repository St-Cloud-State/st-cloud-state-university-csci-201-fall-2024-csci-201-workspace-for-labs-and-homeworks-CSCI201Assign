
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
  int getdegree() const {return degree;}
  
  int getminute() const {return minute;}
  
  float getsecond() const {return second;}

 // modifiers
  void setminute(int mins) {minute = mins;simplify();}

  // additional detailed print method
  void print() const{
    cout << "degree  " << degree << ";  minute " << minute
	 << ";  seconds " << second << endl;
  }

  // Operators
  angle add(const angle right) const;
  bool bigger (const angle right)const;
  bool  read(istream&);
  void  write(ostream&) const;

};
#endif

