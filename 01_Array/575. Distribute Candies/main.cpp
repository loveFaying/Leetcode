#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        map<int, int> myMap;
        int res;
        for(auto val: candyType){
            myMap[val] ++;
        }
        assert(candyType.size() != 0 && candyType.size() % 2 == 0);
        if(candyType.size()/2 <= myMap.size())
            res = candyType.size()/2;
        else    
            res = myMap.size();
        return res;
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