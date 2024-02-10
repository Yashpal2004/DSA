#include <iostream>


int main (int argc, char *argv[]) {

  int arr[] = {5, 3, 7, 2, 1, 8, 9, 6, 9, 23, 21};

  int n = sizeof(arr)/4;

  for (int j = n; j > 1; j--) {
    for (int i = 0; i < n-1; i++) {
      if (arr[i] > arr[i+1]) {
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    std::cout << arr[i] << " ";
  }

  return 0;
}
