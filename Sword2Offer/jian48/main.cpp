#include <iostream>
#include <vector>
#include <algorithm>
#include <printFunctions.h>
#include <unordered_map>

using namespace std;
class Solution {
private:
    int DP(string s){
        int len = s.size();
        unordered_map<char, int> tmp_hash;
        int max_ = 0;
        int tmpIndex = 0;
        vector<int> dp(len, 0);

        for (int i = 1; i < len; i++){
            if (tmp_hash.count(s[i]) > 0 && dp[i-1] >= i - tmp_hash[s[i]] ){
                dp[i] = i - tmp_hash[s[i]]; 
            }else{
                dp[i] = dp[i-1] + 1;
            }
            tmp_hash[s[i]] = i;
            max_ = max(max_, dp[i]);
        }
        return max_;
    }
public:
    int lengthOfLongestSubstring(string s) {
        return DP(s);
    }
};

int main(){
    Solution solution;
    string s = "abcabcbb";
    // printFunctions::printf2Dvector(nums);
    cout << solution.lengthOfLongestSubstring(s) << endl;
    return 0;
}



