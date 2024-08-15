#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
const double PI = 3.14159265;
int main ()
{
double radius, volume;
cout << "Enter the radius of a sphere: ";
cin >> radius;
volume = 4.0/3.0 * PI * radius * radius * radius;
cout << "The spheres volume is: " << volume << endl;
return 0;
}
