#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
  cout << setw(9) << 6.56 << endl
            << setw(6) << 18.76 << endl
            << 124.929 << endl
            << setw(9)<<"---\n"
            << setw(9) << fixed <<setprecision(2)
            << (6.+18.+124.) << endl;
            return 0;

}

