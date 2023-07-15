#include <sort.h>

vector<int> SORT::ShellSort(vector<int> nums){
    int n = nums.size();
    vector<int> vec(n+1, 0);
    for (int i = 0; i < n; i++) vec[i + 1] = nums[i];
    int increment = n;
    int i, j;
    /*
    1、归并排序先分组，即确定步长
    2、所以第一层for就是按照步长进行分组插入排序，分组里面的排序方式就是插入排序
    3、for循环完一次，步长就会减小，直到最后一次步长为1，就是插入排序整个数组
    4、个人理解：希尔排序是插入排序的升级版，希尔排序引入步长这个trick使得排序分组进行，每次分组都是下一次细化分组的基础
    */
    do{
        increment = increment / 3 + 1;
        for (i = increment + 1; i <= n; i++){
            if (vec[i] < vec[i - increment]){
                vec[0] = vec[i];
                for (j = i - increment; vec[j] > vec[0] && j > 0; j -= increment){
                    vec[j + increment] = vec[j]; 
                }
                vec[j + increment] = vec[0];
            }
        }
    }while(increment > 1);
    return vector<int>(vec.begin() + 1, vec.end());
}