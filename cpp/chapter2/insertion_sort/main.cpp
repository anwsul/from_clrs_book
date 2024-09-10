#include <iostream>
using namespace std;

void insertionSort(int *nums, int len);
void printArray(int *nums, int len, string option);


int main(void) {
  const int len = 7;
  int nums[len] = {3, 1, 5, 4, 3, 0, 1};

  printArray(nums, len, "unsorted nums => ");
  insertionSort(nums, len);
  printArray(nums, len, "sorted nums => ");
}


void insertionSort(int* nums, int len) {
  for (int i = 1; i < len; i++) {
    int j = i - 1;
    int key = nums[i];

    while (j >= 0 && nums[j] > key) {
      nums[j + 1] = nums[j];
      j--;
    }
    nums[j + 1] = key;
  }  
}


void printArray(int *nums, int len, string option="") {
  int i = 0;
  cout << option << '[';

  for (i = 0; i < len - 1; i++) {
    cout << nums[i] << ", ";
  }

  cout << nums[i] << ']' << endl;
}

