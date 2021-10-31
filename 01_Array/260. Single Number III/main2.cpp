#include <bits/stdc++.h>
using namespace std;


// https://leetcode-cn.com/problems/single-number-iii/
// Time: O(n)
// Space: O(n)
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
        vector<int> res;
        unordered_map<int, int> myMap;
        for (int num: nums) {
            myMap[num]++;
        }
    
        for (const auto& val: myMap) {
            if (val.second == 1) {
                res.push_back(val.first);
            }
        }
                                         
        return res;
    }

};

void printVector(int val){
    cout << val << " ";
}

int main(){
    
    int nums[] = {1,2,1,3,2,5};
    // int nums[] = {1,0};
    int n = sizeof(nums)/sizeof(int);
    vector<int> vec( nums, nums+n );
    vector<int> res = Solution().singleNumber(vec);
    for_each(res.begin(), res.end(), printVector);
    cout << endl;
    return 0;
}