#include <iostream>
#include <math.h> 

using namespace std;

int main() {
    double x = 16.5;
    double P;
    double a = 3.4;
    double b = 0.61;
    for (x < 21; a < 9; b < 5){
     double c = (b * pow(x, 2) - a) / (exp(a * x) - 1);
     cout << "Значення c: " << c << endl;

    
      double numerator = pow(x, 3) * pow(tan(pow(x + b, 2)), 2) + a;
      double denominator = sqrt(x + b); 
      P = numerator / denominator;
      a++;
      b++;
      x++;
    
    cout << "Значення P: " << P << "\n" << endl;
    }
    return 0;
}

