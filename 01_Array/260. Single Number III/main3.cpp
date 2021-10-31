#include <bits/stdc++.h>
using namespace std;


// https://leetcode-cn.com/problems/single-number-iii/
// Time: O(n)
// Space: O(1)
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
        int xorsum = 0;
        for( int num: nums )
            xorsum ^= num;

        int lsb = ( xorsum == INT_MIN ? xorsum : xorsum & (-xorsum) );
        // int lsb = xorsum & (-xorsum); // leetcode error

        int res1 = 0;
        int res2 = 0;

        for(int num: nums){
            if ( num & lsb )
                res1 ^= num;
            else
                res2 ^= num;
        }

        return {res1, res2};
    }
};

void printVector(int val){
    cout << val << " ";
}

int main(){
    
    // int nums[] = {1,2,1,3,2,5};
    // int nums[] = {-1,0};
    int nums[] = {1,1,-1, -2147483648};
    int n = sizeof(nums)/sizeof(int);
    vector<int> vec( nums, nums+n );
    vector<int> res = Solution().singleNumber(vec);
    for_each(res.begin(), res.end(), printVector);
    cout << endl;
    return 0;
}