//bust case serio

#include <iostream>
#include <vector>
using namespace std;

int binarysearch(vector<int> arr1, int key) {
  int st = 0;
  int end = arr1.size() - 1;

  while (st <= end) {
    int mid = st+(end - st) / 2;
    if (key == arr1[mid]) {
      return mid;
    } else if (key > arr1[mid]) {
      st = mid + 1;
    } else {
      end = mid - 1;
    }
  }

  return -1;
}

int main() {
  vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12};
  int target1 = 12;
  cout << "index is " << binarysearch(arr1, target1) << endl << endl;

  vector<int> arr2 = {-1, 0, 3, 5, 9, 12};
  int target2 = 0;
  cout << "index is " << binarysearch(arr2, target2) << endl;
}
