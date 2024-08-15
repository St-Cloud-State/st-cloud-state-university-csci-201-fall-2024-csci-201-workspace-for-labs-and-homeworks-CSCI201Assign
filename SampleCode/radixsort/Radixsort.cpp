// A  radixsort program; just compile and run  
  
#include <iostream>  
#include <fstream>  
#include <cstring>  
#include <cmath>
#include <string>  
#include <iomanip>  

using namespace std;  
  
 
ofstream outfile;  
ifstream infile;    
char input_file_name[21], output_file_name[21]; 


int get_ith_digit (int n, int i)
{
  int powerOf10 = pow(10, i);
  int last_i = n % powerOf10;
  int digit = last_i / pow(10, i-1);
  return digit;
}
  


int main()  
{  
  const int maxsize = 20;
  const int maxdigits = 5;
  int bucketsize[10] = {}, digit, count;
  int buckets[10][maxsize];
  int numbers[maxsize] = {58963, 2432, 185, 963, 1148, 3, 17, 117, 226, 71893, 13320, 226,
                          2143, 3017, 185, 117, 226, 7456, 9123, 31205};
  
  for (int k = 0; k < 10; k++)
  {
    bucketsize[k] = 0;
  } 

  for (int i = 1; i <= maxdigits; i++)
  {
    for (int j = 0; j <  maxsize; j++)
    { 
       // place all numbers in buckets
       digit = get_ith_digit(numbers[j], i);
       //cout << numbers[j] << " " << i << endl;
       buckets[digit][bucketsize[digit]] = numbers[j];
       bucketsize[digit]++;
    }
    

    //print the buckets (just to test)
    for (int j = 0; j <  10; j++)
    {
      cout << "bucket " << j << " size " << bucketsize[j] << endl;
      for (int k = 0; k <  bucketsize[j]; k++)
      {
        cout << buckets[j][k] << " ";
      }
      cout << endl;
    }

    // copy from buckets back to array
    count = 0;
    for (int j = 0; j <  10; j++)
    {
      for (int k = 0; k <  bucketsize[j]; k++)
      {
        numbers[count] = buckets[j][k]; count++;
      }
    }
 
    //cout << " count " << count << endl;     

    //print the array
    cout << "round " << i << endl;
    for (int j = 0; j <  maxsize ; j++)
    {
      cout << numbers[j] << " ";
    }
    cout << endl;
    //clear all buckets
    for (int k = 0; k < 10; k++)
    {
      bucketsize[k] = 0;
    }

  }
 
  return 0;
}  
  
