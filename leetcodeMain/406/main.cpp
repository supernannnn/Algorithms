#include <iostream>
#include <vector>
#include <algorithm>
#include <printFunctions.h>

using namespace std;
class Solution {
public:

    static bool cmp(const vector<int> a , const vector<int> b){
        return a[0] == b[0] ? a[1] < b[1] : a[0] > b[0];
    }
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin() , people.end() , cmp);
        printFunctions::printf2Dvector(people);
        vector<vector<int>> res;
        for(auto curr_people:people){
            int index = curr_people[1];
            res.insert(res.begin()+index , curr_people); 
        }
        return res;
    }
};


int main(){
    Solution solution;
    vector<vector<int>> nums{{7,0}, {4,4}, {7,1}, {5,0}, {6,1}, {5,2}};
    printFunctions::printf2Dvector(nums);
    solution.reconstructQueue(nums);
    return 0;
}



