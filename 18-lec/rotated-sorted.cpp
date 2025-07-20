#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& arr, int target) {
        int st = 0, end = arr.size() - 1;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (arr[mid] == target) {
                return mid;
            }

            if (arr[st] <= arr[mid]) {
                if (arr[st] <= target && target <= arr[mid]) {
                    end = mid - 1;
                } else {
                    st = mid + 1;
                }
            } else {
                if (arr[mid] <= target && target <= arr[end]) {
                    st = mid + 1;
                } else {
                    end = mid - 1;
                }
            }
        }

        return -1;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;

    int index = sol.search(arr, target);
    cout << "Target found at index: " << index << endl;

    return 0;
}
