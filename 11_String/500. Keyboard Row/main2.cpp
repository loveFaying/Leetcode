#include <bits/stdc++.h>
using namespace std;

// https://leetcode-cn.com/problems/keyboard-row/
// Time: O(L)
// Space: O(C)
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> res;
        string rowIdx = "12210111011122000010020202";

        for (auto& word : words) {
            bool isValid = true;
            char idx = rowIdx[tolower(word[0]) - 'a'];
            for (int i = 1; i < word.size(); i++) {
                if(rowIdx[tolower(word[i]) - 'a'] != idx) {
                    isValid = false;
                    break;
                }
            }
            if (isValid) {
                res.emplace_back(word);
            }
        }
        return res;
    }

};

int main(){
    // string array[] = {"Hello","Alaska","Dad","Peace"};
    string array[] = {"omk"};
    // string array[] = {"adsdf","sfd"};
    int n = sizeof(array)/sizeof(string);
    vector<string> words(array, array+n); 
    vector<string> results = Solution().findWords(words);

    for(auto res: results)
        cout << res << " ";
    cout << endl;
    return 0;
}