#include <iostream>
#include <utility>

 int main (int argc, char *argv[]) {
  
  int arr[] = {4, 6, 2, 3, 1, 8, 7};
  int n = sizeof(arr)/4;

  for (int i = 1; i < n; i++) {
    int j = i;
    while (arr[j] < arr[j-1] && j > 0) {
      std::swap(arr[j], arr[j-1]);
      j--;
    }
  }

  for (int i = 0; i < n; i++) {
    std::cout << arr[i] << " ";
  }

  return 0;
 }
