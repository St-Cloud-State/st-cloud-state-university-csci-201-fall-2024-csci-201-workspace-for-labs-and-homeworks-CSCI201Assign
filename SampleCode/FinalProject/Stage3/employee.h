#include <iostream>  
#include <fstream>  
#include <cstring>  
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
  char name[nameLength];  
  string id;  
  int deductions;
  int workPeriods;  
  float hrlyWage;  
  float Salary;  
  float withholding, netSalary, hrsWorked[maxPeriods];  
 
  void computeSalary( float hours)  
    {  
      Salary = hrlyWage*hours;  
    }  
  
  void computeWithholding()  
    {  
    
      // code to compute withholding applying tax rules.  
      withholding = Salary*deductions/10;
     }  
   
  
  
 public:
  
       
    
  void setName(char n[])
    {
      strcpy(name, n);
    }
  
  void setId(string n)
    {
      id = n;
    }
  
  void setHours(float hours[], int size)
    {
      // hours should be an array of at most 10 floats, i..e,
      // if size is more than 10, we keep the first 10 values only.
      workPeriods = (size < maxPeriods) ? size : maxPeriods; 
      //cout << workPeriods << endl; 
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

  string getId()
    {
      return id;
    }
  
  float getWage()
    {
      return hrlyWage;
    }

  char* getName()
    {
  return name;
    }

  void processEmployee()  
    {  
      
      float hours = 0; 
      bool error = false; 
      
      for (int i = 0; i < workPeriods; i++)
      {
        hours += hrsWorked[i];
        if ((hrsWorked[i] < 0) || (hrsWorked[i] > 16))
           error = true;
      }
      if (error)
        hours = -1;
      computeSalary(hours);  
      computeWithholding();  
      netSalary = Salary-withholding;  
    }  


  void printPersonalInfo(ostream& outfile)  
    {  
      // prints a multi-line report 
      // listing all the fixed personal information  
      
      outfile <<  "Name:   "<<  name << endl  
	      <<  "Id:   "<<  id << endl   
	      << "Hourly Wage:  " << hrlyWage << endl  
	      << "Deductions:   " << deductions << endl  
	      <<"-------------------------------------------------"<<endl 
	      << endl;  
    }  
  
  
  
  void printRecord( ostream& outfile)  
    {  
      // prints on one line with uniform field widths  
      // describing the week's paycheque  
      
      outfile << setw(nameLength+2)<<  name   
	      <<  setw(idLength+2) <<  id   
	      << setw(10) << Salary   
	      << setw(10) << withholding  
	      << setw(10) << netSalary  << endl;   
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
 

  void printReport( ostream& outfile)
  {     // prints a multi-line report for employee
      // describing the week's paycheque
      outfile <<  "Name:   "<<  name << endl
              <<  "Id:   "<<  id << endl
              << "Salary:  " << Salary << endl
              << "Withholding:   " <<  withholding << endl
              << "Net Pay:   " << netSalary  << endl
              <<"-------------------------------------------------"<<endl;
  }
  
};
#endif
