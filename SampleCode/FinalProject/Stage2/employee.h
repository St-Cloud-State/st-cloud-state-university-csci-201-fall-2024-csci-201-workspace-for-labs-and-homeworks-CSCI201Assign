#include <iostream>  
#include <fstream>  
#include <cstring>  
#include <string> 
#include <iomanip> 
#ifndef EMPLOYEE
#define EMPLOYEE 
using namespace std;  


class employee{

 public:
  
  const static int nameLength = 20;   
  const static int idLength = 9; 
  const static int maxPeriods = 10;
  
 private:
  char name[nameLength];  // name is stored as an array of char 
  string id;  // id stored as string
  int deductions;
  int workPeriods;  
  float hrlyWage;  
  float Salary;  
  float withholding, netSalary, hrsWorked[maxPeriods];  
  
  
  
  
  
 public:
  
       
    
  void setName(char n[]) // parameter is array of char, to match name
    {
      strcpy(name, n); // need this function; cannot assign arrays
    }
  
  void setId(string n ) // parameter is a string object
    {
      id =  n; // can be assigned
    }
  
  void setHours(float hours[], int size)
    {
      // hours should be an array of at most 10 floats, i..e,
      // if size is more than 10, we keep the first 10 values only.
      workPeriods = (size < maxPeriods) ? size : maxPeriods; 
      for (int i = 0; i < workPeriods; i++)
	hrsWorked[i] = hours[i];
    }
	  

  void setWage( float wage)
    {
      hrlyWage = wage;
    }
  
  void setDeducts(int deducts)
    {
      deductions = deducts;
    }

  string getId() // returns a string
    {
      return id;
    }
  
  float getWage()
    {
      return hrlyWage;
    }

  char* getName() // returns an array of char
    {
      return name;
    }

  
  void writeEmployee(  ostream& outfile)  
    {
      // saves the raw data to the specified stream
      
      char space = ' ';
      outfile << name << space << id << space;
      for (int i = 0; i < workPeriods; i++)
        outfile << hrsWorked[i] << space;
      outfile << hrlyWage << space; 
      outfile << deductions; 
    } 
};
#endif
