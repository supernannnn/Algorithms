#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int candy(vector<int>& ratings) {
        vector<int> candies(ratings.size(), 1);
        for(int i = 1; i < ratings.size(); i++){
            if(ratings[i] > ratings[i-1]) candies[i] = candies[i-1]+1;      //考虑右孩子比左孩子评分高的情况
        }
        for(int i = ratings.size()-1; i > 0; i--){
            if(ratings[i-1] > ratings[i]) candies[i-1] = max(candies[i]+1, candies[i-1]);
        }
        int sum = 0;
        for(auto value:candies) sum += value; 
        return sum;
    }
};

int main(){
    Solution solution;
    vector<int> nums{1,2,2};
    solution.candy(nums);
    return 0;
}



