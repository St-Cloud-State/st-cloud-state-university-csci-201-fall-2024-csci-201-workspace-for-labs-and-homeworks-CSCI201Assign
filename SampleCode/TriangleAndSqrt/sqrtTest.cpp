#include <iostream> 
#include <cmath>
 using namespace std; 
 
int multcount; //Global variable 
 
 
int main() 
{
  float num;
  float hi, lo, guess, guessSq, eps;

  cout << "Please input the eps:";
  cin >> eps;

  cout << "Please input the first number:";
  cin >> num;

  for (int i = 1; i <= 10; i++)
    {
      hi = num +1; lo = 0;
      guess = (hi+lo)/2;
      guessSq = guess * guess; // save the square to reduce mults
      multcount+= 2;
      
      // Finding the square root by "divide and conquer".
      while ((abs(num - guessSq))> eps)
	{
	  if (guessSq > num)
	    hi = guess;
	  else 
	    lo = guess;
	  guess = (hi+lo)/2; 
	  guessSq = guess*guess; multcount+=2;
	}
      

      cout << "Number = " << num << " Multiplications= " 
	   << multcount << " Result = " << guess << endl;
	
      num *= 1.1; // go on to the next number
      multcount = 0; // reset multcount for next eps
    }
  return 0;
}

  
