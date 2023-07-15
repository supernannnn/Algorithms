#include <sort.h>



int Partition(vector<int>& nums, int left, int right){
    int pivotkey = nums[left];
    while (left < right){
        while (left < right && nums[right] >= pivotkey){    //将比阈值小的元素放到左边
            right--;
        }
        SORT::swap(nums, left, right);  
        while(left < right && nums[left] <= pivotkey){
            left++;
        }
        SORT::swap(nums, left, right);   //将比阈值小的元素放到右边
    }
    return left;

}


void groupSort(vector<int>& nums, int left, int right){
    if (left < right){
        int mid = Partition(nums, left, right);
        groupSort(nums, left, mid - 1);
        groupSort(nums, mid + 1, right);
    }
}


//思路其实和归并排序有点类似，都用到了分治的思想
vector<int> SORT::QuickSort(vector<int> nums){
    int n = nums.size();
    groupSort(nums, 0, n - 1);
    return nums;    
}