#include <bits/stdc++.h>
using namespace std;

// https://leetcode-cn.com/problems/distribute-candies/
// Time:O(n)
// Space:O(n)
class Solution {
public:
    int distributeCandies(vector<int> &candyType) {
        return min(unordered_set<int>(candyType.begin(), candyType.end()).size(), candyType.size() / 2);
    }
};

int main(){
    vector<int> candies{1,1,2,2,3,3};
    // vector<int> candies{1,1,2,3};
    cout << Solution().distributeCandies(candies) << endl;
    // for(auto can : candies)
    //     cout << can << " ";
    // cout << endl;
    return 0;
}