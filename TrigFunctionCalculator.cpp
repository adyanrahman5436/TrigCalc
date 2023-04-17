/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

#include <math.h>

using namespace std;

int main()
{
    double pi, angle, radians;
    pi = acos(-1);
    
    cout << "Enter a angle: " << endl;
    cin >> angle;
    
    radians = angle * pi/180;
    
    cout << "sine(" << radians << ") = " << sin(radians) << endl;
    cout << "cosine(" << radians << ") = " << cos(radians) << endl;
    cout << "tangent(" << radians << ") = " << tan(radians) << endl;
    
    
    return 0;
}

