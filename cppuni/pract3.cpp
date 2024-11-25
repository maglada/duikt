#include <iostream>
#include <math.h>
bool IsWithingRadius(int x, int y, int r) {return (sqrt(x*x + y*y) <= r);}

int main(){

    int x = 0; int y = 0; int r = 0;

    std::cout << "Enter X, Y and Radius: ";
    std::cin >> x >> y >> r;

    std::cout << "\nResult: " << ((IsWithingRadius(x, y, r)) && (y >= 0)) << "\n";

    return 0;

}

