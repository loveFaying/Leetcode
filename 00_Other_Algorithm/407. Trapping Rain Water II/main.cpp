#include <bits/stdc++.h>
using namespace std;

// https://leetcode-cn.com/problems/trapping-rain-water-ii/

class Solution {
public:
    int trapRainWater(vector<vector<int>>& heightMap) {
        int res = 0;
        int maxHeight = 0;
        vector<vector<int>> temp = heightMap;
        // 计算初步的res
        for( int i = 0 ; i < heightMap.size() ; i ++ ){
            for( int j = 0 ; j < heightMap[0].size() ; j ++ ){
                maxHeight = max(maxHeight, heightMap[i][j]);
            }
        }

        for( int i = 1 ; i < heightMap.size()-1 ; i ++ ){
            for( int j = 1 ; j < heightMap[0].size()-1 ; j ++ ){
                // res += (maxHeight-heightMap[i][j]);
                heightMap[i][j] = maxHeight;
            }
        }
        
        for( int i = 1 ; i < heightMap.size()-1 ; i ++ ){
            for( int j = 1 ; j < heightMap[0].size()-1 ; j ++ ){
                int minHeight = min4(heightMap[i-1][j], heightMap[i+1][j], heightMap[i][j-1], heightMap[i][j+1]);
                if(minHeight < temp[i][j])
                    res += 0;
                else
                    res += (minHeight-temp[i][j]);
            }
        }

        return res;
        
    }
private:
    int min4(int a, int b, int c, int d){
        return min(d, min(c, min(a, b)));
    }
};

int main(){
    // int array[3][6] = {
    //     {1,4,3,1,3,2},
    //     {3,2,1,3,2,4},
    //     {2,3,3,2,3,1}
    // };
    // int array[5][5] = {
    //     {3,3,3,3,3},
    //     {3,2,2,2,3},
    //     {3,2,1,2,3},
    //     {3,2,2,2,3},
    //     {3,3,3,3,3}
    // };
    int array[5][4] = {
        {12,13,1,2},
        {13,4,13,12},
        {13,8,10,12},
        {12,13,12,12},
        {13,13,13,13}
    };
    int N = sizeof(array)/sizeof(array[0]);
    int M = sizeof(array)/sizeof(int)/N;
    vector<vector<int>> heightMap(N, vector<int>(M));
    for(int i = 0 ; i < N ; i ++)
        for(int j = 0 ; j < M ; j ++)
            heightMap[i][j] = array[i][j];

    // print heightMap
    for(const auto& i : heightMap){
        for(const auto& j : i){
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    for(vector<vector<int>>::iterator i = heightMap.begin() ; i != heightMap.end() ; i ++){
        for(vector<int>::iterator j = i->begin() ; j != i->end() ; j ++)
            cout << *j << " ";
        cout << endl;
    }

    cout << endl;
    cout << Solution().trapRainWater(heightMap) << endl;

    return 0;
}