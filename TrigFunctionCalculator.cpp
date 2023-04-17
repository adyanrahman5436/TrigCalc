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

