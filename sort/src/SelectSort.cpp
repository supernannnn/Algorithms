#include <sort.h>

vector<int> SORT::SelectSort(vector<int> nums){
    int n = nums.size();
    for (int i = 1; i < n; i++){
        for(int j = i ; j < n; j++){
            if (nums[i-1] > nums[j]) swap(nums, i-1, j);
        }
    }
    return nums;
}