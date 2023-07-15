#include <sort.h>


/*
 * refrence:https://www.bilibili.com/video/BV1fp4y1D7cj/?spm_id_from=333.788.recommend_more_video.5&vd_source=c87ab9547021a0f857a59c4c6060ad22
*/

/*
 *这个程序的关键在于大顶堆的创建，假如当前节点索引是i，其左节点是2*i+1，右节点是2*i+2，还有一个关键点是当用数组模拟大顶堆的时候，要从(n - 1) / 2开始，这个节点可以保证一定有叶子节点
*/


/**
 * @description 用于创建一个大顶堆
 * @param  nums 待维护大顶堆
 * @param   i   维护索引号    
 * @param   n   切断大顶堆，因为每一次排序都把最大的元素放到堆尾，数组长度每次减1
 * @return void
 */
void createMaxHeap(vector<int>& nums, int i, int n){
    int parent = i;
    int lson  = 2 * i + 1;
    int rson  = 2 * i + 2;
    if (lson < n && nums[parent] < nums[lson]){
        parent = lson;
    }
    if (rson < n && nums[parent] < nums[rson]){
        parent = rson;
    }
    //如果发现当前子树不符合大顶堆，就要交换元素，并进行递归操作
    if (parent != i){
        SORT::swap(nums, parent, i);
        createMaxHeap(nums, parent, n);
    }
}


vector<int> SORT::HeapSort(vector<int> nums){
    int n = nums.size();
    //建大顶堆
    for (int i = (n - 1) / 2 ; i >= 0; i--){
        createMaxHeap(nums, i, n);
    }

    //排序，每一次都将顶元素放到数组最后，然后从头维护大顶堆
    for (int i = n - 1; i > 0; i--){
        SORT::swap(nums, i, 0);
        createMaxHeap(nums, 0, i);
    }
    return nums;
}