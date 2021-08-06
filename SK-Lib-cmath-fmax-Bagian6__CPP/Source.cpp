#include <iostream>
#include <cmath>
#include <conio.h>

/*
    Source by CPPReference
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    std::cout << "fmax(2,1)    = " << std::fmax(2, 1) << '\n'
        << "fmax(-Inf,0) = " << std::fmax(-INFINITY, 0) << '\n'
        << "fmax(NaN,-1) = " << std::fmax(NAN, -1) << '\n';

    _getch();
    return 0;
}