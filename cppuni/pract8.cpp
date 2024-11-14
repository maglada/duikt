#include <iostream>
#include <iomanip>

int main() {
  const int n = 10, m = 10;
  int a[n][m];
  
  std::cout << "Elements (size - " << n << "x" << m << ")" << std::endl;
  srand(time(NULL));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      a[i][j] = -50 + rand() % 100;
      std::cout << std::setw(4) << a[i][j];
    }
    std::cout << std::endl;
  }

  int count = 0;
  long long NegElements = 0;
  for (int i = 0; i < n; i++){
    for (int j = 0; j < m; j++){
      if (a[i][j] % 5 == 0 && a[i][j] < 0){
        count++;
        if (NegElements != 0){
          NegElements*=a[i][j];
        } else {
          NegElements = a[i][j];
        }
      }
    }
  }

  int countPos = 0;
  long long PosElements = 0;
  for (int i = 0; i < n; i++){
    for (int j = 0; j < m; j++){
      if (a[i][j] > 0){
        countPos++;
        if (NegElements != 0){
          PosElements+=a[i][j];
        } else {
          PosElements = a[i][j];
        }
      }
    }
  }

  int even = 0;
  long long EvenElements = 0;
  for (int i = 0; i < n; i++){
    for (int j = 0; j < m; j++){
      if (a[i][j] < 0 && a[i][j] % 2 == 0){
        even++;
        if (EvenElements != 0){
          EvenElements+=a[i][j];
        } else {
          EvenElements = a[i][j];
        }
      }
    }
  }

  int uneven = 0;
  for (int i = 0; i < n; i++){
    for (int j = 0; j < m; j++){
      if (a[i][n-1-j] % 2 != 0){
        uneven++;
      }
    }
  }

  std::cout << count << std::endl;
  std::cout << NegElements << std::endl;
  std::cout << PosElements << std::endl;
  std::cout << EvenElements << std::endl;
  std::cout << uneven << std::endl;

  return 0;
}
