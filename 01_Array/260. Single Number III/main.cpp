#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> res;

        for( int i = 1 ; i < nums.size() ; i ++ ){
            cout << binary_search(nums, i, nums.size()-1, nums[i-1]) << endl;
            // if( binary_search(nums, i, nums.size()-1, nums[i-1]) == -1)
            //     res.push_back(nums[i-1]);
        }

        return res;
    }

private:
    // 从nums[left... right]区间内寻找target
    int binary_search(vector<int>& nums, int left, int right, int target){
        int l = left;
        int r = right;
        while (l <= r)
        {
            int mid = l + (r-l)/2;
            if ( nums[mid] == target )
                return mid;
            else if (nums[mid] > target)
                r = mid-1;
            else
                l = mid+1;
        }
        return -1;
    }
};

void printVector(const vector<int>& nums){
    for(int i = 0 ; i < nums.size() ; i ++)
        cout << nums[i] << " ";
    cout << endl;
}

int main(){
    
    int nums[] = {1,2,1,3,2,5};
    int n = sizeof(nums)/sizeof(int);
    vector<int> vec( nums, nums+n );
    printVector( Solution().singleNumber(vec) );
    return 0;
}