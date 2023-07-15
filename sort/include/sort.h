#include <iostream>
#include <vector>
#include <algorithm>
#include <printFunctions.h>
#include <memory>
#include <cstring>



enum SORTMETHOD{
    BubbleSortPlus = 0,
    SelectSort,
    InsertSort,
    ShellSort,
    HeapSort,
    MergeSort,
    QuickSort
};

class SORT {
public:
    inline static void swap(vector<int> &vec, int i, int j);
public:


    vector<int> nums;
    typedef std::shared_ptr<SORT> Ptr;
    SORT(vector<int> nums_): nums(nums_) {
    }
    ~SORT(){}
    vector<int> BubbleSortPlus(vector<int> nums);
    vector<int> SelectSort(vector<int> nums);
    vector<int> InsertSort(vector<int> nums);
    vector<int> ShellSort(vector<int> nums);
    vector<int> HeapSort(vector<int> nums);
    vector<int> MergeSort(vector<int> nums);
    vector<int> QuickSort(vector<int> nums);
    
};

inline void SORT::swap(vector<int> &vec, int i, int j){
    auto tmp = vec[i];
    vec[i]   = vec[j];
    vec[j]   = tmp;
}
