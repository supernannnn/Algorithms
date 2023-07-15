#include <sort.h>
/*
1、设置哨兵
2、比较当前两个数的较小值
3、哨兵记录最小值
4、整体后移
*/
vector<int> SORT::InsertSort(vector<int> nums){
    int n = nums.size();
    vector<int> vec(n + 1, 0);
    for(int i = 0; i < n; i++){
        vec[i + 1] = nums[i];
    }
    int i,j;
    for (i = 2; i <= n; i++){
        if (vec[i] < vec[i - 1]){
            vec[0] = vec[i];        //哨兵记录当前比较较小值
            for (j = i - 1; vec[j] > vec[0]; j--){
                vec[j + 1] = vec[j];                //升序部分后移
            }
            vec[j + 1] = vec[0];                        //将较小值放入左边
        }
    }
    return vector<int>(vec.begin()+1, vec.end());
}