#include <cstdlib>
#include <iostream>
#include <stdlib.h>

using namespace std;

void bubble_sort(int arr[], int n) {
  bool swap = true;

  while (swap) {
    swap = false;
    for (size_t i = 1; i < n; i++) {
      if (arr[i - 1] > arr[i]) {
        int aux = arr[i - 1];
        arr[i - 1] = arr[i];
        arr[i] = aux;
        swap = true;
      }
    }
  }
}

int main(int argc, char *argv[]) {
  int arr[] = {5, 7, 2, 9, 1, 4};
  int n = 6;

  bubble_sort(arr, n);

  for (size_t i = 1; i < n; i++) {
    if (arr[i - 1] > arr[i]) {
      exit(EXIT_FAILURE);
    }
  }

  return EXIT_SUCCESS;
}
