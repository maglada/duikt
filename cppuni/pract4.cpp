#include <iostream>

int main() {
    const int N = 10;
    int numbers[N] = {1, 3, 5, 12, 4, 15, 8, 11, 14, 6}; 
    bool foundFirstFive = false;

    std::cout << "Числа з парним індексом, що більше 10, після першої 5: ";

    for (int i = 0; i < N; i++) {
        if (!foundFirstFive && numbers[i] == 5) {
            foundFirstFive = true;
            continue;
        }

        if (!foundFirstFive) continue;

        if (i % 2 == 0 && numbers[i] > 10) {
            std::cout << numbers[i] << " ";
        }
    }

    std::cout << std::endl;
    return 0;
}

