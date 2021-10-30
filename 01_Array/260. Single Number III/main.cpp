#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
        vector<int> res;
        map<int, int> myMap;
        for(int i = 0 ; i < nums.size() ; i ++){
            myMap[nums[i]] ++;
            
            map<int, int>::iterator iter;
            for( iter = myMap.begin() ; iter != myMap.end() ; iter ++ )
                if( iter->second == 2 )
                    myMap.erase(iter);
        }

        assert(myMap.size() == 2);
        map<int, int>::iterator iter;
        for( iter = myMap.begin() ; iter != myMap.end() ; iter ++)
            res.push_back(iter->first);
        
        return res;
    }

};

void printVector(int val){
    cout << val << " ";
}

int main(){
    
    // int nums[] = {1,2,1,3,2,5};
    int nums[] = {1,0};
    int n = sizeof(nums)/sizeof(int);
    vector<int> vec( nums, nums+n );
    vector<int> res = Solution().singleNumber(vec);
    for_each(res.begin(), res.end(), printVector);

    return 0;
}