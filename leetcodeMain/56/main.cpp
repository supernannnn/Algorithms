#include <iostream>
#include <vector>
#include <algorithm>
#include <printFunctions.h>


class Solution {
public:
    static bool cmp(vector<int>& a, vector<int>& b){
        return a[0] < b[0];
    }

    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        sort(intervals.begin(), intervals.end(), cmp);
        res.push_back(intervals[0]);
        for(int i = 1; i < intervals.size(); i++){
            if(intervals[i][0] > intervals[i-1][1]) res.push_back(intervals[i]);
            else{
                res.pop_back();
                vector<int> tmp{intervals[i-1][0], max(intervals[i][1], intervals[i-1][1])};
                res.push_back(tmp);
                intervals[i] = tmp;
            }
        }
        return res;
    }
};



int main(){
    Solution solution;
    vector<vector<int>> nums{{1,4}, {0,0}};
    printFunctions::printf2Dvector(nums);
    solution.merge(nums);
    return 0;
}



