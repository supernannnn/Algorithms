#include <sort.h>
#include <memory>
using std::shared_ptr;
using std::make_shared;

void merge(vector<int>& nums, vector<int>& tmp, int left,int mid, int right){
    //左半部分还未排序的元素
    int leftNum = left;
    //右半部分还未排序的元素
    int rightNum = mid + 1;
    //临时数组起始点
    int tmpIndex = left;

    //两两比较进行归并
    while (leftNum <= mid && rightNum <= right){
        //如果左边的比较小，就把左边的放入临时数组
        if (nums[leftNum] < nums[rightNum]) tmp[tmpIndex++] = nums[leftNum++];
        //如果右边的比较小，就把右边的放进临时数组
        else tmp[tmpIndex++] = nums[rightNum++];
    }
    //处理单侧未处理完的元素
    while (leftNum <= mid) tmp[tmpIndex++] = nums[leftNum++];
    while (rightNum <= right) tmp[tmpIndex++] = nums[rightNum++];

    //将临时数组的值放到源数组中
    while (left <= right){
        nums[left] = tmp[left];
        left++;
    }

}

void msort(vector<int>& nums, vector<int>& tmp, int left, int right){

    //在划分的时候，只有左边的索引小于右边的索引才有划分的必要性，一个元素其实就是有序序列了
    if (left < right){
        //先分治（分成左右两组）
        int mid = (right + left) / 2;
        msort(nums, tmp, left, mid);
        msort(nums, tmp, mid + 1, right);
        //再合并
        merge(nums, tmp, left, mid, right);
    }

}

vector<int> SORT::MergeSort(vector<int> nums){
    int n = nums.size();
    // shared_ptr<vector<int>> tmp = make_shared<vector<int>>(n, 0);
    vector<int> tmp(n, 0);
    msort(nums, tmp, 0, n - 1);
    return nums;
}