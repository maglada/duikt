#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    // task 1
    int a1, a2, hs;
    string need;
    //side = 3(a1+a2)hs
    //full ((3*sqrt(3))/2)(a1^2+a2^2)+3(a1+a2)hs
    cout << "Enter a1, a2, hs: " << endl;
    cin >> a1 >> a2 >> hs;
    cout << "Enter side or full" << endl;
    cin >> need;
    
    double a1d, a2d, hsd, res;
    a1d = a1;
    a2d = a2;
    hsd = hs;
    
    if (need == "side")
    {
        res = 3*(a1d+a2d)*hsd;
        cout << res << endl;
    }
    else if (need == "full")
    {
        res = ((3*sqrt(3))/2)*(pow(a1d, 2)+pow(a2d, 2))+3*(a1d + a2d)*hsd;
        cout << res << endl;
    }
    
    //task2

    cout << "task 2: " << endl;
    //y=3arccos(x^2x)/sin^2(|x^3|)
    double x;
    cin >> x;
    float y = 3*acos(pow(x, 2*x)/pow(sin(fabs(pow(x, 3))), 2));
    cout << y << endl;

    return 0;
}