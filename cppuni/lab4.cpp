#include <iostream>
#include <time.h>

int main(){
  // 12 int, lsit. sort 1st 6 bubble, max[6-12]*2
  const int n = 12;
  int a[n];
  std::cout << "Enter " << n << " list elements(int): ";
  srand(time(NULL));
  for(int i = 0; i < n; i++){
    a[i] = -10 + rand() % 20;
    std::cout.width(3);
    std::cout << a[i];
  }
  // maximum 2nd half
  int max = a[n/2];
  for (int i = n/2 + 1; i < n; i ++)
    if(max < a[i]) max = a[i];
  std::cout << "\nmax = " << max << "\nmax doubled: " << max*2 << std::endl;

  // sorting bubble
  for (int i = 0; i < 6 - 1; i++) {
    for (int j = 0; j < 6 - i - 1; j++) {
        if (a[j] > a[j + 1]) {
            std::swap(a[j], a[j + 1]);
        }
    }
  }
  for (int i: a)
    std::cout << i << std::endl;
  return 0;
}
