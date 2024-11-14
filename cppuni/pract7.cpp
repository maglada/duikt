#include <iostream>

int main(){

  const int n = 10;
  int positive = 0;
  static int a[n];
  std::cout << "Enter num in (x x x) format" << std::endl;
  
  // task 1
  for (int i = 0; i < n; i++)
    std::cin >> a[i];

  for (int i = 0; i<n ;i++){
    if (a[i] > 0) {
      positive++;
    }
  }
  std::cout << "Amount of positives: " << positive << std::endl;
  
  // task 2
  int MinNum = 0;
  int MaxNum = 0;
  int ElementBetween = 0;
  int max = a[0];
  int min = a[0];

  // max + min in 1 for loop
  for (int i = 0; i < n; i++){
    if (a[i] > max){
      max = a[i];
      MaxNum = i;
    }
    if (a[i] < min){
      min = a[i];
      MinNum = i;
    }
  }

  if (MinNum > MaxNum){
    for (int i = MaxNum + 1; i < MinNum; i++){
      ElementBetween++;
    }
  } else {
    for (int i = MinNum + 1; i < MaxNum; i++){
      ElementBetween++;
    }
  }
  std::cout << "max: " << max << "\nmin: " << min << std::endl;
  std::cout << "elements between: " << ElementBetween << std::endl;

  // task 3
  bool FirstZero = false;
  int count = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] == 0) {
      FirstZero = true;
      continue;
    }
    
    if (FirstZero && a[i] > 0 && a[i] % 2 == 0) {
      count++;
    }
  }
  std::cout << "after first zero: " << count << std::endl;

  // task 4
  int shift_type, direction, N;
  std::cout << "Choose shift type (1 - Logical, 2 - Cyclic): ";
  std::cin >> shift_type;
  
  std::cout << "Choose direction (1 - Right, 2 - Left): ";
  std::cin >> direction;
  
  std::cout << "Enter the number of positions to shift: ";
  std::cin >> N;

  if (shift_type == 1) {
    if (direction == 1) {
      // Logical Shift Right
      for (int i = 0; i < N; ++i) {
        int last = a[n - 1];
        for (int j = n - 1; j > 0; --j) {
          a[j] = a[j - 1];
        }
        a[0] = last;
      }
    } else {
      // Logical Shift Left
      for (int i = 0; i < N; ++i) {
        int first = a[0];
        for (int j = 0; j < n - 1; ++j) {
          a[j] = a[j + 1];
        }
        a[n - 1] = first;
      }
    }
  } else if (shift_type == 2) {
    if (direction == 1) {
      // Cyclic Shift Right
      N = N % n;  // To handle cases where N > n
      if (N != 0) {
        int temp[N];
        for (int i = 0; i < N; ++i) {
          temp[i] = a[n - N + i];
        }
        for (int i = n - 1; i >= N; --i) {
          a[i] = a[i - N];
        }
        for (int i = 0; i < N; ++i) {
          a[i] = temp[i];
        }
      }
    } else {
      // Cyclic Shift Left
      N = N % n;  // To handle cases where N > n
      if (N != 0) {
        int temp[N];
        for (int i = 0; i < N; ++i) {
          temp[i] = a[i];
        }
        for (int i = 0; i < n - N; ++i) {
          a[i] = a[i + N];
        }
        for (int i = 0; i < N; ++i) {
          a[n - N + i] = temp[i];
        }
      }
    }
  }

  // Display shifted array
  std::cout << "Shifted array: ";
  for (int i = 0; i < n; ++i) {
    std::cout << a[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}
