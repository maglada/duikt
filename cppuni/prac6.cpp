#include <iostream>
#include <math.h>

long double factorial(int n) {
    if (n == 0 || n == 1) return 1;
    long double result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}
int main() {
    int n;
    long double a, s, e, x;
    std::cout << "Enter e (error threshold):\n";
    std::cin >> e;
    std::cout << "Enter x:\n";
    std::cin >> x;
    s = 0;
    n = 1;
    a = factorial((int)pow(x, n)) / n;
    while (fabsl(a) >= e) {
        s += a;
        n++;
        a = factorial((int)pow(x, n)) / n;
    }
    std::cout << "s = " << s << std::endl;
    return 0;
}
