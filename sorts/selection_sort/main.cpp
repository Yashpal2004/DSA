
#include <iostream>
#include <utility>
int main (int argc, char *argv[]) {
 
  int arr[] = {7, 5, 9, 4, 8, 2, 3, 1, 4};

  int n = sizeof(arr)/4;

  for (int i = 0; i < n-1; i++) {
    int min = i;
    for (int j = i+1; j < n; ++j) {
      if (arr[j] < arr[min]) {
        min = j;
      }
    }
    std::swap(arr[min], arr[i]);
  }

  for (int i = 0; i < n; i++) {
    std::cout << arr[i] << " ";
  }

  return 0;
} 
