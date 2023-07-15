#include <sort.h>

vector<int> SORT::BubbleSortPlus(vector<int> nums){
    int n = nums.size();

    bool flag = true;
    for (int i = 1; i < n && flag; i++){
        flag = false;
        for (int j = n - 1; j >= i; j--){
            if (nums[j] < nums[j - 1]){
                swap(nums, j, j-1);
                flag = true;
            } 
        }
    }
    return nums;
}